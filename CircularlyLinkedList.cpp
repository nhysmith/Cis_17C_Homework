//CircularlyLinkedList.cpp
#include "CircularlyLinkedList.h"


CircularlyLinkedList::CircularlyLinkedList(int data)
{
	front = new Node;//Creation of my first node
	front->data = data;//Fill the first node with data
	front->next = front;//Point the first node nowhere
						//front->prv = 0;
}


CircularlyLinkedList::~CircularlyLinkedList()
{
	//Start at the beginning and delete from the front to the end
	while (front->next != 0) {
		Node *temp = front;
		front = front->next;
		delete temp;
	}
	//Delete the last element
	delete front;
}


int CircularlyLinkedList::pop()
{
	int data = front->data;
	Node *end = front;
	while (end->next != front)
	{
		end = end->next;
	}
	end->next = front->next;
	end = end->next;
	delete front;
	front = end;

	/*if (front->next != 0) {
	Node *temp = front;
	front = front->next;
	//front->prv = 0;
	delete temp;

	}*/
	return data;
}
void CircularlyLinkedList::push(int data)
{
	// Create a node fill it with data
	Node *next = new Node;
	next->data = data;
	next->next = front;
	//Find the end of the linked list
	Node *end = front;
	while (end->next != front) {
		end = end->next;
	}
	//Place the next node at the end
	end->next = next;
	//next->next = front;
	//next->prv = end;
}
