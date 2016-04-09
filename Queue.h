#pragma once
#ifndef QUEUE_H
#define	QUEUE_H

#include "Node.h"
class Queue
{
private:
	Node *front;
public:
	Queue(int);
	~Queue();
	int pop();
	void push(int);
};
#endif


