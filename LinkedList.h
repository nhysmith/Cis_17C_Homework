/*
* File:   LinkedList.h
* Author: Dr. Mark E. Lehr
* Created on March 16, 2016, 9:09 PM
* Purpose:  Specification of the Class
*/

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "Node.h"

class LnkdLst {
private:
	Node *front;
public:
	LnkdLst(int);    //Constructor
	~LnkdLst();      //Destructor
	int pop();       //Pull data off the list
	void push(int);  //Push data onto the list
};

#endif	/* LINKEDLIST_H */