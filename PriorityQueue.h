//PriorityQueue.h
#pragma once
#ifndef PRIORITYQUEUE_H
#define	PRIORITYQUEUE_H

#include "Node.h"
class PriorityQueue
{
private:
	Node *front;
public:
	PriorityQueue(int,int);
	~PriorityQueue();
	int pop();
	void push(int,int);
};
#endif


