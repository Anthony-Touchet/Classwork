/*
Anthony Touchet
#1085
10/6/15

1) it does need to be templated
2) it only needs to be able to push elements "add" them to the stack
3)pop elements "remove" them from the stack
4)peek the top of the stack "look at the the last element pushed onto it"
5)check if its empty
6)keep track of the size
*/

#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

/*void Stack::push(Node &n)//Push function
{
	if (top != NULL)//If top is not null, next down is preivious and node is new top
	{
		n.next = top;//Next Node is equal to old top.
		top = &n;//New top is current node pushing.
	}

	else
	{
		top = &n;//Node is now the top
	}

	cout << "Node " << n.data << " has been pushed.\n";

	counter++;//Size counter
}

void Stack::empty(Stack s)
{
	if (top == NULL)//If top is empty, stack empty
	{
		cout << "The stack is empty.\n";
	}

	else//Else, stack has something in it
	{
		cout << "The stack is not empty.\n";
	}
}

void Stack::size(Stack s)//Using the int couter to keep track of the 
{
	cout << "The size is: " << counter << endl;
}

void Stack::peek(Stack s)//Checking the top node through dereferancing.
{
	cout << "Node " << top->data << " is on top.\n";
}

void Stack::pop(Stack s)//Popping the stack
{
	if (top == NULL)//Stack is empty
	{
		cout << "No nodes to pop.\n";
	}

	else//Stack has nodes
	{	
		cout << "Node " << top->data << " has been popped.\n";
		top = top->next;//Top is now old top through referance.
		
		counter--;//Size counter
	}
}*/