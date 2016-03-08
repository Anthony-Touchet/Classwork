/*Implement a program that will allow a user to view and alter a text file from the command console.The program should do the following :
	a.Open a text file called “MyLog.txt”, or create one if it doesn’t exist.
	b.Ask the user if they want to display, write, or clear the file, or exit the program.
		i.Display : Print the contents of the file to the console.
		ii.Write : Ask the user for input and append whatever they write to the end ofthe file.
		iii.Clear : Erase the contents of the file by creating a new blank one in its place.
		iv.Exit : Close the program.
	c.After the user completes their selection, they should be prompted for what they want to do next, for example they could continue to write more lines to the file.
	d.The contents of the file should not be erased when the program starts, so something entered previously should still be viewable if the program is closed and restarted.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int choose()
{
	cout << "Welcome User. Enter the number of your choosing:\n1 Display\n2 Write text\n3 Clear\n4 Exit\n";//instructions
	int choice;
	cin >> choice;
	return choice;
}

void write(string text)
{
	ofstream file; 
	file.open("MyLog.txt", ios_base::app);//Adding to the end of the file.
 
	file << "Lets Do this. LEROOOOOOY GIIIINIKINS" << endl;//Putting the line in the file.

	file.close();//Close
}

void display(string text)
{
	ifstream file;
	file.open("MyLog.txt", ios_base::in);

	while (getline(file, text))//Keep goin as long as it is not the end of the file.
	{
		file >> text;//Takes from file.
		cout << text << endl;//Prints to screen
	}
	file.close();
}

void clear()
{
	ofstream file;
	file.open("MyLog.txt", ios_base::out);//Overwriting any data in the file.
	
	file << "" << endl;//Nothing inside so the txt file is blank.

	cout << "\nCleared\n\n";
	
	file.close();
}


int main()
{
	string text;//Text that will be entered.

	for (int i = 0; i < 20; i++)//Repeat until 4 is selected.
	{	
		int choice = choose();

		switch (choice)
		{
		case 1://Display
			display(text);
			break;

		case 2://Write
			write(text);
			break;

		case 3://Clear
			clear();
			break;

		case 4://Exit
			cout << "\nThank you for using the log.\n\n";
			break;

		default:
			cout << "try again\n";
			continue;
		}
		
		if (choice == 4)
		{
			break;
		}

	}
	
	system("pause");
	return 0;
}