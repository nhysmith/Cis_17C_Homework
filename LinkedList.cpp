/*
* File:   LinkedList.h
* Author: Dr. Mark E. Lehr
* Created on March 16, 2016, 9:09 PM
* Purpose:  Implementation of the Class
*/

#include "LinkedList.h"


LnkdLst::LnkdLst(int data) {
	front = new Node;//Creation of my first node
	front->data = data;//Fill the first node with data
	front->next = 0;//Point the first node nowhere
}

LnkdLst::~LnkdLst() {
	//Start at the beginning and delete from the front to the end
	while (front->next != 0) {
		Node *temp = front;
		front = front->next;
		delete temp;
	}
	//Delete the last element
	delete front;
}

int LnkdLst::pop() {
	int data = front->data;
	if (front->next != 0) {
		Node *temp = front;
		front = front->next;
		delete temp;
	}
	return data;
}

void LnkdLst::push(int data) {
	//Create a node fill it with data
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
}