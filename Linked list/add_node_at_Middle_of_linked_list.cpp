#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};


void display(node *n){
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n = n->next;		
	}
	
}


void push(node **head_ref, int newData){
	node *newNode = new node();
	newNode -> data = newData;
	newNode -> next = *head_ref;
	*head_ref = newNode;
}


void insertAfter(node *prev_node, int newData){
	node *newNode = new node();
	newNode -> data = newData;
	newNode -> next = prev_node -> next;
	prev_node -> next = newNode;
}

int main()
{
	node *head=NULL;
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	
	// 1 2 3 4 5 
	
	insertAfter(head->next,79); // insert data in 3 postion
	
	display(head);
	return 0;
}
