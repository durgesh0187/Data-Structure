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


void middle(node *prev_node, int newData)
{
	if(prev_node==NULL)
	{
		cout<<"give prev. node can't be null "<<endl;
		return;
	}
	
	node *newNode = new node();
	newNode->data=newData;
	newNode->next=prev_node->next;
	
	prev_node->next=newNode;
	newNode->prev=prev_node;
	
	if(newNode->next!=NULL)
	{
		newNode->next->prev=newNode;
	}	
}



int main()
{
	node *head = NULL;
	push(&head,2);
	push(&head,4);
	push(&head,6);
	
	// 6 4 2
	
	middle(head->next,5);  // add element in middle in linked list
	
	display(head);
	return 0;
}
