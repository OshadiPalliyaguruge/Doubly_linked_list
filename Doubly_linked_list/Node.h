#pragma once

#include <iostream>
using namespace std;

class Node {
public:
	Node* right;
	Node* left;
	int value;
	Node()
	{
		left = NULL;
		right = NULL;
	}
};
