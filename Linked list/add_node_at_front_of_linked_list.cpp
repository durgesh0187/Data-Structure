#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};


void display(node *n){
	int count = 0;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n = n->next;
		count++;
	}
	cout<<endl;
	cout<<"No. of element in Linked list is: "<< count<<endl;
	
}


void push(node **head_ref, int newData){
	node *newNode = new node();
	newNode -> data = newData;
	newNode -> next = *head_ref;
	*head_ref = newNode;
}


int main()
{
	node *head=NULL;
	push(&head,5); // last element in linked list
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1); // first element in linked list
	
	display(head);
	return 0;
}
