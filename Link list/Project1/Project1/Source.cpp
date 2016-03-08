#include <iostream>
#include <string>
using namespace std;

struct Node
{
	Node *next;
	Node *prev;
	int data;
};

void main()
{
	Node *node1;
	Node *node2;

	node1->next = node2;
	node2->next = nullptr;
	node2->prev = node1;
	node1->prev = nullptr;

	node1->data = 5;
}
