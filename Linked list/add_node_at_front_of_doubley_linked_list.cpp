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
int main()
{
	node *head = NULL;
	push(&head,2);
	push(&head,4);
	push(&head,6);
	
	display(head);
	return 0;
}
