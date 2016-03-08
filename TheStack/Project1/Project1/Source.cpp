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
#include "Header.h"
#include <string>
using namespace std;

int main()
{
	Stack stack;//Stack
	Node node1(1);//Test Node 1
	Node node2(2);//Test node 2
	Node node3(3);//Test node 3
	Node node4(4);//Test node 4
	Node node5(5);//Test node 5
	
	stack.push(node1);//Pushing Node1
	stack.push(node2);//Pushing Node2
	stack.push(node3);//Pushing Node3
	stack.push(node4);//Pushing Node4
	stack.push(node5);//Pushing Node5

	stack.pop(stack);//Popping Node5
	
	stack.size(stack);//Printing size of stack
	stack.empty(stack);//Checking if the stack is empty.

	stack.peek(stack);//Checking top of the stack.

	system("pause");
	return 0;
}