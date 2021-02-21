#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node (int data){
		this->data=data;
		this->next=NULL;
		
	}
};

struct LinkedList{
	Node* head;
	LinkedList(){
		head=NULL;
	}
	
	void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head=temp;
    }
    
    void print(Node* n){
    	if(n==NULL)
    	return;
    	cout<<n->data<<" ";
    	print(n->next);
	}
	Node* reverse(Node* n){
		if (n==NULL||n->next==NULL)
		return n;
		Node* res= reverse(n->next);
		n->next->next = n;
        n->next = NULL;
        return res;
        
	}
};
 
  

int main() 
{ 
  LinkedList ll;
  ll.push(10);
  ll.push(12);
  ll.push(14);
  ll.push(15);
  ll.push(117);
  ll.push(118);
  ll.push(119);
  ll.print(ll.head);
  ll.head=ll.reverse(ll.head);
  ll.print(ll.head);
}
