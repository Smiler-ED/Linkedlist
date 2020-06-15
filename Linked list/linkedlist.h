#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

class LinkedList
{
	Node *head;
	int size;
public:
	LinkedList();
	LinkedList(int nElem);
	~LinkedList();

	void insert(int nElem);
	void remove(int index);
	void print();
	
};

#endif