How to Run The Program:
	Most of the actual controls are only choices. The constant in this program is that 1 is almost always yes or stab. The only time the Player will have just two 
choices is 1 = stab, 2 = shoot. Other than that the program will handle itself just tell it 1 or any other key when the program prompts for input. DON'T HIT MULTIPLE 
KEYS ON THE SAME LINE!!!

Reason for the No Multiple Keys on the same line:
	cin >> will only take one character at a time. It takes the first character of input and runs it through the senario. Then, when the code repeats, it takes the next
input character and loops it through as well. This process continues until the loop ends, since the loop is searching for only a number. Plus, these items are sent to accept
an integer. If they are not an integer, then the program will constantly loop.