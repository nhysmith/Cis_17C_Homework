//PriorityQueue.cpp
#include "PriorityQueue.h"



PriorityQueue::PriorityQueue(int data, int priority)
{
    front = new Node;//Creation of my first node
	front->data = data;//Fill the first node with data
	front->next = 0;//Point the first node nowhere
    front->priority = priority;
}


PriorityQueue::~PriorityQueue()
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


int PriorityQueue::pop()
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
void PriorityQueue::push(int data, int priority)
{
	// Create a node fill it with data
	Node *next = new Node;
	next->data = data;
	next->next = 0;
	//Find the end of the linked list
    //
    if(next->priority < front->priority)
    {
        next->next = front;
        front = next;
    }
    
    Node *prv = front;
    Node *end = front-> next; 
    if(next->priority >= end->priority)
    {
        while(next->priority >= prv->priority)
        {
            prv = prv-> next;
            end = prv-> next;
        } 
        
        prv->next = next;
        next->next = end;
        
    }
	//while (end->next != 0) {
		//end = end->next;
	//}
	//Place the next node at the end
	//end->next = next;
	//next->prv = end;
}
