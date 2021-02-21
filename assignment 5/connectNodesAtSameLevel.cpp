
#include <bits/stdc++.h> 
#include <iostream> 
using namespace std; 

class node { 
public: 
	int data; 
	node* left; 
	node* right; 
	node* nextRight; 

	/* Constructor that allocates a new node with the 
	given data and NULL left and right pointers. */
	node(int data) 
	{ 
		this->data = data; 
		this->left = NULL; 
		this->right = NULL; 
		this->nextRight = NULL; 
	} 
}; 

void connectRecur(node* p); 

// Sets the nextRight of 
// root and calls connectRecur() 
// for other nodes 
void connect(node* p) 
{ 
	// Set the nextRight for root 
	p->nextRight = NULL; 

	// Set the next right for rest of the nodes 
	// (other than root) 
	connectRecur(p); 
} 

/* Set next right of all descendents of p. 
Assumption: p is a compete binary tree */
void connectRecur(node* p) 
{ 
	// Base case 
	if (!p) 
		return; 

	// Set the nextRight pointer for p's left child 
	if (p->left) 
		p->left->nextRight = p->right; 

	if (p->right) 
		p->right->nextRight = (p->nextRight) ? p->nextRight->left : NULL; 

	
	connectRecur(p->left); 
	connectRecur(p->right); 
} 

int main() 
{ 


	node* root = new node(10); 
	root->left = new node(8); 
	root->right = new node(2); 
	root->left->left = new node(3); 

	connect(root); 

	cout << "Following are populated nextRight pointers in the tree"
			" (-1 is printed if there is no nextRight)\n"; 
	cout << "nextRight of " << root->data << " is "
		<< (root->nextRight ? root->nextRight->data : -1) << endl; 
	cout << "nextRight of " << root->left->data << " is "
		<< (root->left->nextRight ? root->left->nextRight->data : -1) << endl; 
	cout << "nextRight of " << root->right->data << " is "
		<< (root->right->nextRight ? root->right->nextRight->data : -1) << endl; 
	cout << "nextRight of " << root->left->left->data << " is "
		<< (root->left->left->nextRight ? root->left->left->nextRight->data : -1) << endl; 
	return 0; 
} 

