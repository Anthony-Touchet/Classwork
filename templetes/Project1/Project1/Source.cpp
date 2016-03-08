/*Anthony Touchet
10/5/15

1. Min
DESCRIPTION: Returns the lower of two values.
INPUT: Two template arguments (a, b).
OUTPUT: The lower of the two values a and b.

2. Max
DESCRIPTION: Returns the higher of two values.
INPUT: Two template arguments (a, b).
OUTPUT: The higher of the two values a and b.

3. Clamp
DESCRIPTION: Constrains a value within the range of two other values.
INPUT: Three template arguments (min, max, val).
OUTPUT: The value of the val constrained between min and max.

4. Min (specialised for char)
DESCRIPTION: As above but first checks if a and b represent alphabetical characters. If so,
the function will return the value that is alphabetically lower.
INPUT: Two template arguments (a, b).
OUTPUT: The alphabetically lower of the two values a and b.

*/

#include <iostream>
#include <string>
using namespace std;

template<typename T>
T Min(T a, T b)
{
	if (a > b)
	{
		return b;
	}

	else
	{
		return a;
	}
}

template<typename M>
M Max(M a, M b)
{
	if (a > b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

template<typename C>
C Clamp(C a, C b, C c)
{
	if (a > c)
		return a;
	
	if (c > b)
		return b;

	else
		return c;
	
}

int main()
{
	int res = Min<int>( 1 , 10);

	cout << res << endl;

	int max = Max<int>(1, 10);

	cout << max << endl;

	int clamp = Clamp<int>(1, 10 , 5);

	cout << clamp << endl;

	system("pause");
	return 0;
}