//CircularlyLinkedList.h
#pragma once
#ifndef CIRCULARLYLINKEDLIST_H
#define	CIRCULARLYLINKEDLIST_H

#include "Node.h"
class CircularlyLinkedList
{
private:
	Node *front;
	//Node *back;
public:
	CircularlyLinkedList(int);
	~CircularlyLinkedList();
	int pop();
	void push(int);
};
#endif