#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
	node *next;
	node *prev;
};


void display(node *n)
{
	while(n!=NULL)
	{
		cout<< n->data <<" ";
		n = n -> next;
	}
}

void push(node **head_ref, int newData)
{
	node *newNode = new node();
	newNode -> data = newData;
	newNode -> next = *head_ref;
	newNode -> prev = NULL;
	
	if(*head_ref!=NULL)
	{
		(*head_ref) -> prev = newNode;
	}
	
	*head_ref=newNode;
}


void append(node **head_ref, int new_data)  // add node in end linked list
{ 
	node *new_node = new node();
	new_node -> data = new_data;
	new_node -> next = NULL;
	
	node *last = *head_ref;
	if(*head_ref==NULL)
	{
		new_node -> prev = NULL;
		*head_ref=new_node;
		return;
	}
	
	while(last->next!=NULL)
	{
		last=last->next;
	}
	
	last->next=new_node;
	new_node->prev=last;
	
	return;
}

int main()
{
	node *head = NULL;
	push(&head,2);
	push(&head,4);
	push(&head,6);
	
	// 6 4 2
	
	append(&head,9);
	
	// 6 4 2 9
	
	display(head);
	return 0;
}
