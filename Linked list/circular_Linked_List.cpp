#include <iostream>
using namespace std;

// create structure

struct node{
	int data;
	node *next;
};

// logic for circular linked list
void circularLinkedList(node *first)
{
	node *temp = first;
	if(first!=NULL)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
		
		while(temp!=first)
		{
			cout<<temp->data<<endl;
			temp = temp->next;
		}
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
	fifth -> next = head;
	
	// call display function
	
	circularLinkedList(third);
	
		
	return 0;
}
