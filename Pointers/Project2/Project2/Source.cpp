#include <iostream>
#include <string>
using namespace std;

int main()
{
	int *p;
	int i;
	int k;

	i = 42;
	k = i;
	p = &i;//p is equal to i only if *p is used.
	cout << i << endl;
	cout << k << endl;
	cout << p << endl;

	system("pause");
	return 0;
}