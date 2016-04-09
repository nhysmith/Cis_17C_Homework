#include "Stack.h"



Stack::Stack(int data)
{
    front = new Node;//Creation of my first node
	front->data = data;//Fill the first node with data
	front->next = 0;//Point the first node nowhere
}


Stack::~Stack()
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


int Stack::pop()
{
    Node *prv = front;
    Node *end = front;
    int data;
    
    //if there's only one item in the stack
    if(prv->next == 0)
    {
        data = front->data;
        delete front;
        return data;
    }
    
    //if there's 2 items in the stack
     else if(prv->next->next == 0)
     {
        data = front->next->data;
		delete front->next;
        front->next = 0;
        return data;
     }
    
   //if there's 3 or more itmes in the stack
    while (end->next->next != 0) 
    {
		end = end->next;
    }
	/*while (prv->next != 0) 
    {
        if(prv->next->next != 0)
        {
            prv = prv->next;
            end = prv->next;
        }
        else
        {
            //end = prv
        }
	}*/
	data = end->next->data;
	/*if (front->next != 0) {
		Node *temp = front;
		front = front->next;
		//front->prv = 0;*/
		//delete temp;
    //prv->next = 0;
	//}
    
    delete end->next;
	end->next = 0;
	return data;
}
void Stack::push(int data)
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

