
//--------------------------------------------------------------------
// CS215-402 LAB 4
//--------------------------------------------------------------------
// Author: Gavin Crain
// Date: 2/19/2020
// Description: This C++ program presents a menu that 
// allows the user to sum numbers between a range, print a square of asterisks, or exit.
// It uses a loop for continuous operation and a switch statement to handle user choices. 
// The program runs until the user opts to exit.
//--------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int b = 0;
	// making continuous 
		while (b < 1) {
			//menu
			cout << "S - Sum Between" << endl;
			cout << "B - Print Box" << endl;
			cout << "X - Exit" << endl;
			cout << "Enter option: ";
			//setting up to recognize the input to be recognized by if statement
			char opt;
			string answer;
			cin >> answer;
			opt = answer[0];
			string choice;
			// setting "choice" to specific words to be checked by if 
			switch (opt) {
			case 'S':
			case 's':
				choice = "sum";
				break;
			case 'B':
			case 'b':
				choice = "print";
				break;
			case 'X':
			case 'x':
				choice = "exit";
				break;
			default: cout << "Invalid option! Try again!" << endl << endl;
			}
			//setting up integers for all the options of the game
			int start, stop, size;
			int sum = 0;
			// checking "choice" to see what to run 
			if (choice == "sum") {
				// running for loop to add each number in sequence
				cout << "Enter start and stop numbers: ";
				cin >> start >> stop;
				for (int i = start; i <= stop; i++) {
					sum = sum + i;
				}
				cout << "Sum of numbers between " << start << " and " << stop << " is " << sum << endl << endl;
			}
			else if (choice == "print") {
				// running for loops to print the right number of lines and stars on a line
				cout << "Enter size of box: ";
				cin >> size;
				for (int i = 0; i < size; i++) {
					for (int i = 0; i < size; i++) {
						cout << "* ";
					}
					cout << endl;
				}
				cout << endl;
			}
			else if (choice == "exit") {
				// making the way to end the game 
				cout << "Thanks for playing!" << endl << endl;
				system("pause");
				return 0;
			}
		
		}
}
