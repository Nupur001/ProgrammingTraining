#include<iostream>
using namespace std;
class Node{
	public:
	char data;
	Node* next;
	Node (char data){
		this->data=data;
		this->next=NULL;
		
	}
};

struct LinkedList{
	Node* head;
	LinkedList(){
		head=NULL;
	}
	void insertEnd(char data){
		Node* temp= new Node(data);
		if (head==NULL)
		{
		head=temp;
		head->next=NULL;
		return;
		}
		Node* curr=head;
		while(curr->next!=NULL)
		curr=curr->next;
		curr->next=temp;
		temp->next=NULL;
	}
	void print(Node* n){
		if (n==NULL)
			return;
		cout<<n->data<<"->";
		print(n->next);		
	}
	
};
Node* reverse(Node* n){
		if (n==NULL||n->next==NULL)
		return n;
		Node* res= reverse(n->next);
		n->next->next = n;
        n->next = NULL;
        return res;
        
	}
bool isPallindrome(Node* head){
	if(head==NULL)
	return true;
	Node *slow =head, *fast=head;
	while(fast->next!=NULL&&fast->next->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	Node *rev = reverse(slow->next);
	Node *curr=head;
	while(rev!=NULL){
		if(rev->data!=curr->data)
		return false;
		curr=curr->next;
		rev=rev->next;
	}
	return true;
}

int main(){
	LinkedList ll;
	ll.insertEnd('a');
	ll.insertEnd('b');
	ll.insertEnd('c');
	ll.insertEnd('b');
	ll.insertEnd('a');
	ll.print(ll.head);
	cout<<"NULL\n";
	cout<<(isPallindrome(ll.head)?"Yes, it is a pallindrome":"No, it is not a pallindrome");
}
