#pragma once

#include <iostream>
#include "Node.h"
using namespace std;

class DoublyLinkedList {
private:
	Node* start;
public:
	DoublyLinkedList() {
		start = NULL;
	}
	void insertBeg(int X);	//Insert a new node at the beginning
	void insertEnd(int x);// Insert a node at the end
	void deleteBeg();		//Delete a node from the beginning 
	void deleteEnd();		//Delete a node from the end 
	void deletee(int D);  //Delete a node with a given value
	void print(); 			//Print current list
	Node* search(int F);	//Search an existing element 
	int sum();			//Add list values to get sum
};