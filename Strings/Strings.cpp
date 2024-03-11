#include <iostream>
#include <string>
using namespace std;

int main() {
	string greeting = "Hello";
	string firstName = "Jim ";
	string lastName = "Bob";
	string fullName = firstName + lastName;
	cout << fullName << endl;
	firstName = "Jim";
	lastName = "Bob";
	fullName = firstName + " " + lastName;
	cout << fullName << endl;
	firstName = "Jim ";
	lastName = "Bob";
	fullName = firstName.append(lastName);
	cout << fullName << endl;
	//Addition vs Concatenation
	int x = 10;
	int y = 20;
	int z = x + y; //z = 30
	string a = "10";
	string b = "20";
	string c = a + b; // z = 1020
	//Numbers and strings cannot be added together

	// String Length
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the txt string is: " << txt.length() << endl;
	cout << "This uses txt.size(), an alias of txt.length, to output the length of the txt string which is " << txt.size();
}