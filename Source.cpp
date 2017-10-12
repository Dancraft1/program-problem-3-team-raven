/*

Ray Chen - Period 1

Three Digit Ascend Descend Selection

3 digit number and find stuff about it.

*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
#include <math.h>

// Namespaces
using namespace std;

//variables
int input;
int hundreds;
int tens;
int ones;

// Functions()
void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN
void main() {
	cout << "Enter a three digit number. \n";
	cin >> input;

hundreds = (input / 100);
tens  = (input - hundreds * 100) / 10;
ones = (input - hundreds * 100 - (tens * 10));

	if (hundreds < tens && tens < ones) {
		cout << "Ascending \n";
	}
	else if (hundreds > tens && tens > ones) {
		cout << "Descending \n";
	}
	else {
		cout << "Neither \n";
	}
	pause(); // pauses to see the displayed text
}
