#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
 
Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
void push(Node** head_ref, int new_data)
{
    Node* new_node = newNode(new_data);
 
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

Node* addTwoLists(Node* first, Node* second)
{
 

    Node* res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum;
 
    // while both lists exist
    while (first != NULL
           || second != NULL) {
        sum = carry + (first ? first->data : 0)
              + (second ? second->data : 0);
 
        
        carry = (sum >= 10) ? 1 : 0;
 
        sum = sum % 10;
 
        temp = newNode(sum);
 
        if (res == NULL)
            res = temp;
 
        else
            prev->next = temp;
 
        prev = temp;
 
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
 
    if (carry > 0)
        temp->next = newNode(carry);
 
    // return head of the resultant list
    return res;
}
 
// A utility function to print a linked list
void printList(Node* node)
{
    if (node == NULL) 
        return;
	printList(node->next);
		cout << node->data << " ";

}
 
/* Driver code */
int main(void)
{
    Node* res = NULL;
    Node* first = NULL;
    Node* second = NULL;
 
    push(&first, 9);
    push(&first, 9);
    push(&first, 9);
    push(&first, 9);
    push(&first, 9);
   cout<<"First List ";
   printList(first);
 

    push(&second, 8);
    push(&second, 8);
    cout<<"Second List ";
	printList(second);
 
    res = addTwoLists(first, second);
    cout << "Sum list is ";
    printList(res);
 
    return 0;
}
