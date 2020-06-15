#include <iostream>
#include "node.h"
#include "linkedlist.h"

using namespace std;

int main(int argc, char const *argv[])
{
	LinkedList* LLlist = new LinkedList(6); //Iniciar LinkedList en 6

	cout << "Iniciando la LinkedList cpm [6]\nA = "; LLlist->print();

	cout << "Insertar (2) \nA = ";
	LLlist->insert(1); 
	LLlist->print(); //[1,6]
	
	cout << "Insertar (4)... Now \nA = ";
	LLlist->insert(4); 
	LLlist->print();  // [1,2,4]

	cout << "Removing the 1 index element (starting from 0)... Now\n";
	LLlist->remove(1); 
	cout << "A = "; LLlist->print(); //[1,4]

	return 0;
}