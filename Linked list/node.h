  
#ifndef NODE_H
#define NODE_H

class Node
{
	int elem;
	Node *next;
public:
	Node(int elem_a);
	~Node();
	
	int getElem();
	void setElem(int elem_a);

	Node* getNext();
	void setNext(Node *next_a);
	
};
#endif