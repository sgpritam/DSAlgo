#include<iostream>
using namespace std;

class Node 
{
public:
	int data; 
	Node* next; 

	Node(int d) {
		data = d;
		next = NULL;
	}
}; 

void printNthFromLast(Node* head, int n) 
{ 
	int len = 0, i; 
	Node *temp = head; 

	while (temp != NULL) 
	{ 
		temp = temp->next; 
		len++; 
	} 
	if (len < n){
		return; 
	}
	temp = head; 

	for (i=1;i<len-n+1;i++){
		temp = temp->next; 
	}

	cout<<temp->data<<endl; 

	return; 
}

void insertATHead(Node *&head, int data) {
	Node *new_node = new Node(data);
	new_node->next = head;
	head = new_node;
}

void insertAtTail(Node *&head, int data) {
	if(head == NULL) {
		insertATHead(head, data);
		return;
	}
	Node *temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	Node *new_node = new Node(data);
	temp->next = new_node;
	return;
}

int main() 
{
	Node* head = NULL;
	int n,k;
	while(n!=-1){
		cin>>n;
        if(n!=-1)                 
		insertAtTail(head,n);
	}
	cin>>k;

	printNthFromLast(head, k); 
	return 0; 
}