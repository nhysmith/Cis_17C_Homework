/*
* File:   main.cpp
* Author: Dr. Mark E. Lehr
* Created on March 16, 2016, 9:07 PM
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "LinkedList.h"
#include "Stack.h"
#include "CircularlyLinkedList.h"
#include "DoublyLinkedList.h"
#include "PriorityQueue.h"
#include "SortedLinkedList.h"
#include "Queue.h"

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
	//Declare variables
	int size = 10, n = size;

	cout << "Linked List\n";
	LnkdLst list(n--);

	//Push data into the linked list
	while (n>0)list.push(n--);

	//Pop the data off the linked list
	for (int i = 0; i<size; i++)cout << list.pop() << endl;

	n = size;
	cout << "Stack\n";
	Stack stack(n--);

	//Push data into the linked list
	while (n>0)stack.push(n--);

	//Pop the data off the linked list
	for (int i = 0; i<size; i++)cout << stack.pop() << endl;

	n = size;
	cout << "DoublyLinkedList\n";
	DoublyLinkedList dList(n--);

	//Push data into the linked list
	while (n>0)dList.push(n--);

	//Pop the data off the linked list
	for (int i = 0; i<size; i++)cout << dList.pop() << endl;

	n = size;
	cout << "PriorityQueue\n";
	PriorityQueue pQueue(n--, n);

	//Push data into the linked list
	while (n>0)pQueue.push(n--, n);

	//Pop the data off the linked list
	for (int i = 0; i<size; i++)cout << pQueue.pop() << endl;

	n = size;
	cout << "SortedLinkedList\n";
	SortedLinkedList sList(n--);

	//Push data into the linked list
	while (n>0)sList.push(n--);

	//Pop the data off the linked list
	for (int i = 0; i<size; i++)cout << sList.pop() << endl;

	n = size;
	cout << "Queue\n";
	Queue queue(n--);

	//Push data into the linked list
	while (n>0)queue.push(n--);

	//Pop the data off the linked list
	for (int i = 0; i<size; i++)cout << queue.pop() << endl;

	n = size;
	cout << "CircularlyLinkedList\n";
	CircularlyLinkedList cList(n--);

	//Push data into the linked list
	while (n>0)cList.push(n--);

	//Pop the data off the linked list
	for (int i = 0; i<size ; i++)cout << cList.pop() << endl;

	//Exit stage right
	return 0;
}