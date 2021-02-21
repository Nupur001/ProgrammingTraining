
#include <bits/stdc++.h>
using namespace std;


class node 
{ 
	public:
	char data; 
	node* left; 
	node* right; 
}; 


int search(char arr[], int strt, int end, char value); 
node* newNode(char data); 


node* buildTree(char in[], char pre[], int inStrt, int inEnd) 
{ 
	static int preIndex = 0; 

	if (inStrt > inEnd) 
		return NULL; 


	node* tNode = newNode(pre[preIndex++]); 

	/* If this node has no children then return */
	if (inStrt == inEnd) 
		return tNode; 

	/* Else find the index of this node in Inorder traversal */
	int inIndex = search(in, inStrt, inEnd, tNode->data); 

	/* Using index in Inorder traversal, construct left and 
	right subtress */
	tNode->left = buildTree(in, pre, inStrt, inIndex - 1); 
	tNode->right = buildTree(in, pre, inIndex + 1, inEnd); 

	return tNode; 
} 

/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end] 
The function assumes that value is present in in[] */
int search(char arr[], int strt, int end, char value) 
{ 
	int i; 
	for (i = strt; i <= end; i++) 
	{ 
		if (arr[i] == value) 
			return i; 
	} 
} 

/* Helper function that allocates a new node with the 
given data and NULL left and right pointers. */
node* newNode(char data) 
{ 
	node* Node = new node();
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 

	return (Node); 
} 

/* This funtcion is here just to test buildTree() */
void printInorder(node* node) 
{ 
	if (node == NULL) 
		return; 

	/* first recur on left child */
	printInorder(node->left); 

	/* then print the data of node */
	cout<<node->data<<" "; 

	/* now recur on right child */
	printInorder(node->right); 
} 

int main() 
{ 
	char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' }; 
	char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' }; 
	int len = sizeof(in) / sizeof(in[0]); 
	node* root = buildTree(in, pre, 0, len - 1); 

	cout << "Inorder traversal of the constructed tree is \n"; 
	printInorder(root); 
} 


