#include"Node.h"
Node::Node(int d) 
{
	this->data = d;
	this->next = NULL;

}
void Node::setData(int d) 
{
	this->data = d;
}
int Node::getData()
{
	return this->data;
}
void  Node::setNext(Node* nt)
{
	this->next = nt;
}
Node* Node::getNext()
{
	return this->next;
}