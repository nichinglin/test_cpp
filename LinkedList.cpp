/*
https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr
https://github.com/kamal-choudhary/singly-linked-list
*/
#include <iostream>

class Data
{
private:
public:
	int info;
};

class Node
{
public:
	Data data;
	Node *next;
};

using namespace std;
class LinkedList
{
private:
	Node *head, *tail;
public:
	LinkedList();
	~LinkedList();

	void CreateNodeAtTail(Data value);
	void CreateNodeBeforeHead(Data value);
	void CreateNodeAtPos(int pos, Data value);
	void DeleteHead();
	void DeleteTail();
	void DeletePos(int pos);
	void Display();
};

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

int main()
{
	LinkedList obj;
	Data info;
	info.info = 25;
	obj.CreateNodeAtTail(info);
	obj.CreateNodeAtTail(info);
	obj.CreateNodeAtTail(info);
	obj.CreateNodeAtTail(info);
	cout<<"\n--------------------------------------------------\n";
	cout<<"---------------Displaying All nodes---------------";
	cout<<"\n--------------------------------------------------\n";
	obj.Display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"-----------------Inserting At End-----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.CreateNodeAtTail(info);
	obj.Display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"----------------Inserting At Start----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.CreateNodeBeforeHead(info);
	obj.Display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"-------------Inserting At Particular--------------";
	cout<<"\n--------------------------------------------------\n";
	obj.CreateNodeAtPos(5,info);
	obj.Display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"----------------Deleting At Start-----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.DeleteHead();
	obj.Display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"-----------------Deleing At End-------------------";
	cout<<"\n--------------------------------------------------\n";
	obj.DeleteTail();
	obj.Display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"--------------Deleting At Particular--------------";
	cout<<"\n--------------------------------------------------\n";
	obj.DeletePos(4);
	obj.Display();
	cout<<"\n--------------------------------------------------\n";
	return 0;
}