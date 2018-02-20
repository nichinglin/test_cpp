/*
https://www.codementor.io/codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr
https://github.com/kamal-choudhary/singly-linked-list
*/

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