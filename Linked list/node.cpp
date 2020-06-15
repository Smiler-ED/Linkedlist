#include "node.h"
#include <iostream>
using namespace std;

Node::Node(int elem_a){
	elem = elem_a;
	next = nullptr;
}
Node::~Node(){}
int Node::getElem(){return elem;}
void Node::setElem(int elem_a){elem = elem_a;}
Node* Node::getNext(){return next;}
void Node::setNext(Node* next_a){next = next_a;}