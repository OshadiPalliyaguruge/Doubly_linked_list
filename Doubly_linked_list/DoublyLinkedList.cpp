// IndexNum:
// Name: 

#include "DoubleLinkedList.h"

void DoublyLinkedList::insertBeg(int x)
{
	Node* newNode = new Node;
	newNode->value = x;
	newNode->left = NULL;
	newNode->right = start;
	start->left = newNode;
	start = newNode;
}
void DoublyLinkedList::insertEnd(int x)
{
	Node* newNode = new Node;
	newNode->value = x;
	newNode->right = NULL;
	if (start == NULL)
	{
		newNode->left = NULL;
		start = newNode;
	}
	else
	{
		Node* ptrNode = start;
		while (ptrNode->right != NULL)
		{
			ptrNode = ptrNode->right;
		}
		ptrNode->right = newNode;
		newNode->left = ptrNode;
	}
}
void DoublyLinkedList::deleteBeg()
{
	if (start == NULL)
	{
		cout << "UNDERFLOW CONDITION !!\n";
	}
	else
	{
		Node* ptrNode = start;
		start = start->right;
		start->left = NULL;
		delete ptrNode;
	}
}
void DoublyLinkedList::deleteEnd()
{
	if (start == NULL)
	{
		cout << "UNDERFLOW CONDITION !!\n";
	}
	else
	{
		Node* ptrNode = start;
		while (ptrNode->right != NULL)
		{
			ptrNode = ptrNode->right;
		}
		ptrNode->left->right = NULL;
		delete ptrNode;
	}
}
void DoublyLinkedList::deletee(int D)
{
	if (start == NULL)
	{
		cout << "UNDERFLOW CONDITION !!\n";
	}
	else
	{
		Node* ptrNode = start;
		int count = 0;
		while (ptrNode != NULL)
		{
			if (ptrNode->value == D)
			{
				count++;
				break;
			}
			ptrNode = ptrNode->right;
		}
		if (count == 1) //if value is found
		{
			if (ptrNode->right == NULL) //if value is the last node
			{
				ptrNode->left->right = NULL;
				delete ptrNode;
				return;
			}
			else if (ptrNode == start) //if value is the first node
			{
				start = start->right;
				start->left = NULL;
				delete ptrNode;
				return;
			}
			else
			{
				ptrNode->left->right = ptrNode->right;
				ptrNode->right->left = ptrNode->left;
				delete ptrNode;
				return;
			}
		}
		else //value is not in the list
			cout << "Value is not in the list\n";
	}
}

void DoublyLinkedList::print()
{
	Node* ptrNode = start;
	while (ptrNode != NULL)
	{
		cout << ptrNode->value << " ";
		ptrNode = ptrNode->right;
	}
	cout << endl;
}

Node* DoublyLinkedList::search(int F)
{
	Node* ptrNode = start;
	while (ptrNode != NULL)
	{
		if (ptrNode->value == F)
			return ptrNode;
		ptrNode = ptrNode->right;
	}
	cout << "Value is not in the list\n";
}
int DoublyLinkedList::sum()
{
	int Sum = 0;
	Node* ptrNode = start;
	while (ptrNode != NULL)
	{
		Sum += ptrNode->value;
		ptrNode = ptrNode->right;
	}
	return Sum;
}