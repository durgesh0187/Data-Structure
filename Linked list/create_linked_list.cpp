#include <iostream>
using namespace std;

// create structure

struct node{
	int data;
	node *next;
};

// displaying linked list


void display(node *n)
{
	// in first node head is not NULL then print 
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n = n -> next;
	}
}


int main()
{
	// create linked list size;
	
	node *head = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();
	node *fifth = new node();
	
	// insert data in node
	
	head -> data = 1;
	head -> next = second;
	
	second -> data = 2;
	second -> next = third;
	
	third -> data = 3;
	third -> next = fourth;
	
	fourth -> data = 4;
	fourth -> next = fifth;
	
	fifth -> data = 5;
	fifth -> next = NULL;
	
	// call display function
	
	display(head);
	
		
	return 0;
}
