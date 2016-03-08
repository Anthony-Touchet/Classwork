#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c = 'A';
	double *p = &c;//The problem is the conflicting variable types.

	cout << *p << endl;

	system("pause");
	return 0;
}