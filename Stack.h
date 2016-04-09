#pragma once
#ifndef STACK_H
#define	STACK_H

#include "Node.h"
class Stack
{
private:
	Node *front;
public:
	Stack(int);
	~Stack();
	int pop();
	void push(int);
};
#endif

