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
	cout<<endl;
}


void push(node **head_ref, int newData){
	node *newNode = new node();
	newNode -> data = newData;
	newNode -> next = *head_ref;
	*head_ref = newNode;
}

void deleteNode(node **head_ref, int key)
{
	node *prev, *temp;
	
	temp = *head_ref;  // store head to the temp
	
	if(temp != NULL && temp -> data == key)   // if k is present in head
	{
		*head_ref = temp -> next;
		free(temp);
		return;
	}
	
	while(temp != NULL && temp -> data != key)  //
	{
		prev=temp;
		temp=temp -> next;
	}
	
	if(temp==NULL)   // we travalse whole linked list and we didn't got the key
	{
		return;
	}
	
	prev -> next = temp -> next;
	free(temp);
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
	display(head);
	
	deleteNode(&head, 3);  // 3 is delete in the node
		
	display(head);
	return 0;
}
