#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

// logic for find middle element 

void middleElement(node *head)
{
	node *slow_ptr = head;
	node *fast_ptr = head;
	
	if(head!=NULL)
	{
		while(fast_ptr!=NULL && fast_ptr->next!=NULL)
		{
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
		}
		cout<<"Middle element is : "<<slow_ptr->data<<endl;
	}
}

int main()
{
	
	node *head = new node();
	node *second = new node();
	node *third = new node();
	node *fourth = new node();
	node *fifth = new node();
	
	node *a = new node();
	node *b = new node();
	node *c = new node();
	node *d = new node();
	node *e = new node();
	node *f = new node();
	
	head -> data = 1;
	head -> next = second;
	
	second -> data = 2;
	second -> next = third;
	
	third -> data = 3;
	third -> next = fourth;
	
	fourth -> data = 4;
	fourth -> next = fifth;
	
	fifth -> data = 5;
	fifth -> next = a;
	
	
	
	
	a -> data = 6;
	a -> next = b;
	
	b -> data = 7;
	b -> next = c;
	
	c -> data = 8;
	c -> next = d;
	
	d -> data = 9;
	d -> next = e;
	
	e -> data = 10;
	e -> next = f;
	
	f -> data = 11;
	f -> next = NULL;
	
		
//	display(head);
	
	middleElement(head);
	
	return 0;
}
