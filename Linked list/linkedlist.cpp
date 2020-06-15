#include <iostream>
#include "linkedlist.h"
#include "node.h"

using namespace std;

LinkedList::LinkedList(){
	head = nullptr;
	size = 0;
}
LinkedList::LinkedList(int nElem){
	head = new Node(nElem);
	size = 1;
}
LinkedList::~LinkedList(){
	Node *cursor;
	while(head != nullptr){
		cursor = head;
		cursor = head->getNext();
		delete cursor;
	}
}

void LinkedList::insert(int nElem){
	if(!size)
		head = new Node(nElem);
	else{
		Node *cursor = head;
		Node *previous = nullptr;

		while(cursor != nullptr and cursor->getElem() <= nElem){
			previous = cursor;
			cursor = cursor->getNext();
		}

		Node *temp = new Node(nElem);
		if (previous == nullptr){
			temp->setNext(head);
			head = temp;
		}
		else{
			temp->setNext(cursor);
			previous->setNext(temp);
		}
	}
	size++;
}
void LinkedList::remove(int index){
	Node *cursor = head;
	if(index != 0){
		for (int i = 0; i < index - 1; i++){
            cursor = cursor->getNext();
        }
        Node *nodeRem = cursor->getNext();
        cursor->setNext(nodeRem->getNext());
        cursor = nodeRem;
	}
	else
		head = head->getNext();
	delete cursor;
	size--;
}
void LinkedList::print(){
	Node *cursor = head;
	cout << "[";
	for(int i=0; i<=size-1; i++){
		cout << cursor->getElem() << " ";
		cursor = cursor->getNext();
	}
	cout << "]"<< endl;
}