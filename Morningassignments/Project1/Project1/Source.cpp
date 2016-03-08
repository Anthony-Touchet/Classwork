#include <iostream>
using namespace std;

int main() {
	char grid[5][5] = { 
	{ '1','2','3','4','5' },
	{ '1','2','3','4','5' },
	{ '1','2','3','4','5' },
	{ '1','2','3','4','5' },
	{ '1','2','3','4','5' } };
	char character = '*';

	int position[2] = { 2,2 };

	// Draw the grid once
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == position[0] && j == position[1])
				cout << character;
			else
				cout << grid[i][j];
			cout << " ";
		}
		cout << endl;
	}

	// Wait for input
	cout << "\n\nHit enter."; cin.get();

	// Move the character
	position[1] = 1;

	// Clear screen and redraw
	system("cls");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == position[0] && j == position[1])
				cout << character;
			else
				cout << grid[i][j];
			cout << " ";
		}
		cout << endl;
	}


	cout << "\n\nDone."; cin.get();

	return 0;
}

/*if(up) position[0] -= 1;
else if (right) position[1] += 1;
else if (down) position[0] += 1;
else if (left) position[1] -= 1;*/