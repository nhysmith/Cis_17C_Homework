#pragma once
#ifndef DOUBLYLINKEDLIST_H
#define	DOUBLYLINKEDLIST_H

#include "Node.h"
class DoublyLinkedList
{
private:
	Node *front;
	//Node *back;
public:
	DoublyLinkedList(int);
	~DoublyLinkedList();
	int pop();
	void push(int);
};
#endif

