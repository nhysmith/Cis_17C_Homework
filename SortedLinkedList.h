#pragma once
#ifndef SORTEDLINKEDLIST_H
#define	SORTEDLINKEDLIST_H

#include "Node.h"

class SortedLinkedList
{
private:
    Node *front;
public:
	SortedLinkedList(int);
	~SortedLinkedList();
    int pop();
	void push(int);
};
#endif

