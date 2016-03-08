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

int main()
{	
	
	Stack<string> stack;//Stack
	Node <string>node1("Jill");//Test Node 1
	Node <string>node2("Jane");//Test node 2
	Node <string>node3("Cid");//Test node 3
	Node <string>node4("Nanners");//Test node 4
	Node <string>node5("Aron");//Test node 5
	
	stack.push(node1);//Pushing Node1
	stack.push(node2);//Pushing Node2
	stack.push(node3);//Pushing Node3
	stack.push(node4);//Pushing Node4
	stack.push(node5);//Pushing Node5

	stack.pop();//Popping Node5
	
	stack.size();//Printing size of stack
	stack.empty();//Checking if the stack is empty.

	stack.peek();//Checking top of the stack.

	system("pause");
	return 0;
}