/*
* File:   Node.h
* Author: Dr. Mark E. Lehr
* Created on March 16, 2016, 9:07 PM
*/

#ifndef NODE_H
#define	NODE_H

struct Node {
	int data;
    int priority;
	Node *next;
	Node *prv;
};

#endif	/* NODE_H */