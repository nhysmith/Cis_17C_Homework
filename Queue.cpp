#include "Queue.h"



Queue::Queue(int data)
{
    front = new Node;//Creation of my first node
	front->data = data;//Fill the first node with data
	front->next = 0;//Point the first node nowhere
}


Queue::~Queue()
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


int Queue::pop()
{
	int data = front->data;
	if (front->next != 0) {
		Node *temp = front;
		front = front->next;
		//front->prv = 0;
		delete temp;
	}
	return data;
}
void Queue::push(int data)
{
	// Create a node fill it with data
	Node *next = new Node;
	next->data = data;
	next->next = 0;
	//Find the end of the linked list
	Node *end = front;
	while (end->next != 0) {
		end = end->next;
	}
	//Place the next node at the end
	end->next = next;
	//next->prv = end;
}
