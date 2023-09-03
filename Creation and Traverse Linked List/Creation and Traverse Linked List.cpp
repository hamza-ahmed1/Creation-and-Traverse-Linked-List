// Creation and Traverse Linked List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class LinkedList {

public :
	int data;
	LinkedList* nextaddress;
};

int main()
{
	//we have to intialize the linked list in heap:

	LinkedList* head;
	LinkedList* a = NULL;
	LinkedList* b = NULL;
	LinkedList* c = NULL;

	//allocte memory above 3 nodes in heap:

	a = new LinkedList();
	b = new LinkedList();
	c = new LinkedList();

	//Assaign values to that nodes:

	a->data = 5;
	b->data = 6;
	c->data = 7;

	//assaign the address:
	
	head = a;
	a->nextaddress = b;
	b->nextaddress = c;
	c->nextaddress = NULL;

	//Print the values by traversing :
	while (head!=NULL)
	{
		cout << "Element : " << head->data << endl;
		head = head->nextaddress;
	}



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
