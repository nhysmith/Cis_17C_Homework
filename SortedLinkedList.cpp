#include "SortedLinkedList.h"



SortedLinkedList::SortedLinkedList(int data)
{
    front = new Node;//Creation of my first node
	front->data = data;//Fill the first node with data
	front->next = 0;//Point the first node nowhere
}


SortedLinkedList::~SortedLinkedList()
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
int SortedLinkedList::pop()
{
	int data = front->data;
	if (front->next != 0) {
		Node *temp = front;
		front = front->next;
		delete temp;
	}
	return data;
}
void SortedLinkedList::push(int data)
{
	// Create a node fill it with data
	Node *next = new Node;
	next->data = data;
	next->next = 0;
	//Find the end of the linked list
    //
    if(next->data < front->data)
    {
        next->next = front;
        front = next;
    }
    
    Node *prv = front;
    Node *end = front-> next; 
    if(next->data >= end->data)
    {
        while(next->data >= prv->data)
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
