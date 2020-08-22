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



void append(node **head_ref, int newData)   // append function is use for add new node in last node
{
	node *newNode = new node();
	newNode -> data = newData;
	newNode -> next = 	NULL;
	
	node *last = *head_ref;
	
	if(*head_ref==NULL)
	{
		*head_ref = newNode;
		return;
	}
	
	while(last -> next != NULL)
	{
		last = last -> next;
	}
	
	last -> next = newNode;
	return; 
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
	
	append(&head, 90);
	
	display(head);
	return 0;
}
