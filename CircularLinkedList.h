#pragma once
#include"Node.h"
class circularLinkedList 
{
	Node* start;
public:
	circularLinkedList();
	void insertAtBeg(int);
	void insertAtEnd(int);
	void insertAtPos(int,int);
	void display();
	int countlistItems();
	void deleteAtBeg();
	void deleteAtEnd();
	void deleteAtPos(int);

};
