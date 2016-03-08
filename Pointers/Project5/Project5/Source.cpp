#include <iostream>
#include <string>
using namespace std;

int main()
{
	char blocks[3] = { 'A','B','C' };
	char *ptr = &blocks[0];
	char temp;
	temp = blocks[0];//A
	temp = *(blocks + 2);//C.[] works like pointers. Pointing to a specific cell
	temp = *(ptr + 1);//B. [1]
	temp = *ptr;//A. [0]

	ptr = blocks + 1;//Some junk but b and c before.
	temp = *ptr;//B. Above problem changes [0] to [1]
	temp = *(ptr + 1);//C. keeps going up from last problem.

	ptr = blocks;//ABC and some junk 
	temp = *++ptr;//B increasing by [1]
	temp = ++*ptr;//C adding [1]
	temp = *ptr++;//C max letting reached
	temp = *ptr;//C just what it is

	system("pause");
	return 0;
}