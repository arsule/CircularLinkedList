#include"CircularLinkedList.h"


circularLinkedList::circularLinkedList()
{

	this->start = NULL;
}
void circularLinkedList::insertAtBeg(int d)
{
	Node* temp = new Node(d);
	if (start == NULL)
	{
		start = temp;
		temp->setNext(start);
		return;
	}
	
	
	Node* p = start;
	while (p->getNext() != start)
	{
		p = p->getNext();
	}
	
	temp->setNext(start);
	start = temp;
	p->setNext(start);
	
}
void circularLinkedList::insertAtEnd(int d)
{

}
void circularLinkedList::insertAtPos(int d, int pos)
{

}
void circularLinkedList::display()
{
	Node* p = start;
	if (start == NULL)
	{
		cout << "No nodes to display.\n";
	}
	
	while (p->getNext() != start)
	{
		cout << "\n" << p->getData();
		p = p->getNext();
	}
	cout << "\n" << p->getData();
}

int circularLinkedList::countlistItems()
{
	Node* p = start;
	int count = 0;
	if (start == NULL)
	{
		//cout << "No nodes to display.\n";
		return 0;
	}

	while (p->getNext() != start)
	{
		//cout << "\n" << p->getData();
		p = p->getNext();
		count++;
	}
	//cout << "\n" << p->getData();
	count++;
	return count;
}
void circularLinkedList::deleteAtBeg()
{

}
void circularLinkedList::deleteAtEnd()
{

}
void circularLinkedList::deleteAtPos(int pos)
{

}