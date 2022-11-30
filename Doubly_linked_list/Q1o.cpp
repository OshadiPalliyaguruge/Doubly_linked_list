// IndexNum:
// Name: 

#include <iostream>
//#include <queue>
#include "DoubleLinkedList.h"

using namespace std;

int main()
{
	int nodes = 0, elements = 0, operations=0, choice = 0;
	cout << "Enter number of nodes :";
	cin >> nodes;
	DoublyLinkedList obj1;
	cout << "Enter the elements  : \n";
	for (int i = 0; i < nodes; i++)
	{
		cin >> elements; 
		obj1.insertEnd(elements);
	}
	
	/*obj1.insertEnd(4);
	obj1.insertEnd(8);
	obj1.insertEnd(10);
	obj1.insertEnd(2);
	obj1.insertEnd(7);*/

	int terms = 0;
	while (terms == 0)
	{
		cout << endl << endl;
		cout << "\t1 - Insert Beginning" << endl;
		cout << "\t2 - Insert End" << endl;
		cout << "\t3 - Delete Beginning" << endl;
		cout << "\t4 - Delete End" << endl;
		cout << "\t5 - Delete Value" << endl;
		cout << "\t6 - Print" << endl;
		cout << "\t7 - Search" << endl;
		cout << "\t8 - Sum" << endl;
		cout << "\t0 - Exit" << endl;

		cout << "\n\nEnter the number of operations : ";
		cin >> operations;

		for (int i = 0; i < operations; i++)
		{
			cout << "\nEnter your choice : ";
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1: {
				int num = 0;
				cout << "\nEnter the value you want to insert : ";
				cin >> num;
				obj1.insertBeg(num);
				cout << "\n Linked list (After the operations) : ";
				obj1.print();
				break;
			}
			case 2: {
				int num = 0;
				cout << "\nEnter the value you want to insert : ";
				cin >> num;
				obj1.insertEnd(num);
				cout << "\n Linked list (After the operations) : ";
				obj1.print();
				break;
			}
			case 3: {

				obj1.deleteBeg();
				cout << "\n Linked list (After the operations) : ";
				obj1.print();
				break;
			}
			case 4: {
				obj1.deleteEnd();
				cout << "\n Linked list (After the operations) : ";
				obj1.print();
				break;
			}
			case 5: {
				int num = 0;
				cout << "\n\nEnter the value you want to delete : ";
				cin >> num;
				obj1.deletee(num);
				cout << "\n Linked list (After the operations) : ";
				obj1.print();
				break;
			}
			case 6: {
				obj1.print();
				break;
			}
			case 7: {
				int num = 0;
				cout << "\nValue you want to Search : ";
				cin >> num;
				Node* temp = obj1.search(num);
				if (temp->left == NULL)
				{
					cout << "Previous value : NULL " << endl;
					cout << "Next value : " << temp->right->value << endl;
				}
				else if (temp->right == NULL)
				{
					cout << "Previous value : " << temp->left->value << endl;
					cout << "Next value : NULL " << endl;
				}
				else
				{
					cout << "Previous value : " << temp->left->value << endl;
					cout << "Next value : " << temp->right->value << endl;
				}
				break;
			}
			case 8: {
				int sum = obj1.sum();
				cout << "\nSUM of the Doubly linked list elements = " << sum << endl;
				//obj1.print();
				break;
			}
			case 0: {
				terms = 1;
				break;
			}
			default:
			{
				cout << "\n!!! ERROR: INVALID INPUT !!!" << endl;
			}

			}
		}
	}
	
}