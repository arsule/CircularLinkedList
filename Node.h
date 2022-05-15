#pragma once
#include<iostream>
using namespace std;
class Node {
	int data;
	Node* next;
public:
	Node(int);
	void setData(int);
	int getData();
	void setNext(Node*);
	Node* getNext();

};
