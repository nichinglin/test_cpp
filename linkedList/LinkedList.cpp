/*
https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr
https://github.com/kamal-choudhary/singly-linked-list
*/
#include <iostream>
#include "LinkedList.h"
#include "Noda.h"

using namespace std;
LinkedList::LinkedList()
{
	head=NULL;
	tail=NULL;
}
LinkedList::~LinkedList()
{
}
void LinkedList::CreateNodeAtTail(Data value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else
	{	
		tail->next=temp;
		tail=temp;
	}
}
void LinkedList::CreateNodeBeforeHead(Data value)
{
	Node *temp=new Node();
	temp->data=value;
	temp->next=head;
	head=temp;
}
void LinkedList::CreateNodeAtPos(int pos, Data value)
{
	Node *pre=new Node();
	Node *cur=new Node();
	Node *temp=new Node();
	cur=head;
	for(int i=1;i<pos;i++)
	{
		pre=cur;
		cur=cur->next;
	}
	temp->data=value;
	pre->next=temp;	
	temp->next=cur;
}
void LinkedList::DeleteHead()
{
	Node *temp=new Node();
	temp=head;
	head=head->next;
	delete temp;
}
void LinkedList::DeleteTail()
{
	Node *current=new Node();
	Node *previous=new Node();
	current=head;
	while(current->next!=NULL)
	{
		previous=current;
		current=current->next;	
	}
	tail=previous;
	previous->next=NULL;
	delete current;
}
void LinkedList::DeletePos(int pos)
{
	Node *current=new Node();
	Node *previous=new Node();
	current=head;
	for(int i=1;i<pos;i++)
	{
		previous=current;
		current=current->next;
	}
	previous->next=current->next;
}
void LinkedList::Display()
{
	Node *temp=new Node();
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data.info<<"\t";
		temp=temp->next;
	}
}