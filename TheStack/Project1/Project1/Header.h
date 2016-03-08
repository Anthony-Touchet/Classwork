/*
Anthony Touchet
#1085
10/6/15

1) it does not need to be templated
2) it only needs to be able to push elements "add" them to the stack
3)pop elements "remove" them from the stack
4)peek the top of the stack "look at the the last element pushed onto it"
5)check if its empty
6)keep track of the size
*/

#include <iostream>
#include <string>

class Node
{
public:
	Node(int);//Node Constructor
	int data;//Just data
	Node * next = NULL;//Referancing back to the old top node
};

class Stack
{
public:
	Node *top = NULL;//The node on top of the stack. Set to Null to 0 out Stack
	void push(Node &);//Pushing a node onto the stack
	void pop(Stack);//Popping the Node off the stack
	void peek(Stack);//Seeing what the top node is
	void size(Stack);//The size of the Stack
	void empty(Stack);//Checking if the stack is empty
	int counter;//Counter for stack size.
};