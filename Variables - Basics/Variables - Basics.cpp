#include <iostream>
using namespace std;

int main() {
	int myInt = 5;
	double myFloat = 5.99;
	char myChar = 'S';
	string myString = "Hello";
	bool myBool = true;
	cout << myInt << endl;
	cout << myFloat << endl;
	cout << myChar << endl;
	cout << myString << endl;
	cout << myBool << endl;
	int myAge = 765;
	cout << "I am " << myAge << " years old." << endl;
	int x = 5;
	int y = 6;
	int sum = x + y;
	cout << x << " + " << y << " = " << sum << endl;
	// Exercise
	int newNum = 50;
	cout << newNum << endl;
	int a = 5, b = 6, c = 50;
	cout << a + b + c << endl;
	int d, e, f;
	d = e = f = 49;
	cout << d + e + f << endl;
	// Identifiers
	int m = 60;           // What is m?
	int minsPerHour = 60; // Preferred
	// Constants
	const int constant = 16;
	// Examples
	const int hoursPerDay = 24;
	const float pi = 3.14;
}