#include <iostream>
using namespace std;

int main() {
	int sum1 = 100 + 50; // 150 (100 + 50)
	int sum2 = sum1 + 250; // 400 (150 + 250)
	int sum3 = sum2 + sum2; // 800 (400 + 400)

	//Arithmetic Operators
	int x = 6;
	int y = 3;
	/*
	Operator (+)
	Name (Addition)
	Description (Adds together 2 values)
	Example (x + y)
	*/
	int add = x + y;
	cout << add << endl;
	/*
	Operator (-)
	Name (Subtraction)
	Description (Subtracts 1 value from another)
	Example (x - y)
	*/
	int sub = x - y;
	cout << sub << endl;
	/*
	Operator (*)
	Name (Multiplication)
	Description (Multiplies 2 values)
	Example (x * y)
	*/
	int mul = x * y;
	cout << mul << endl;
	/*
	Operator (/)
	Name (Division)
	Description (Divides 1 value by another)
	Example (x / y)
	*/
	int div = x / y;
	cout << div << endl;
	/*
	Operator (%)
	Name (Modulus)
	Description (Returns the division remainder)
	Example (x % y)
	*/
	int mod = x % y;
	cout << mod << endl;
	/*
	Operator (++)
	Name (Increment)
	Description (Increases the value of a variable by 1)
	Example (++x)
	*/
	int inc = ++x;
	cout << inc << endl;
	/*
	Operator (--)
	Name (Decrement)
	Description (Decreases the value of a variable by 1)
	Example (--x)*/
	int dec = --x;
	cout << dec << endl;

	//Assignment Operators
	/*
	Operator (=)
	Name (Assignment)
	Description (Assigns a value to a variable)
	Example (x = 1)
	*/
	x = 10;
	cout << x << endl;
	/*
	Operator (+=)
	Name (Addition Assignment)
	Description (Adds a value to a variable)
	Example (x += 5)
	Equivalent (x = x + 5)
	*/
	x += 5;
	cout << x << endl;
	/*
	Operator (-=)
	Name (Subtraction Assignment)
	Description (Subtracts a value from a variable)
	Example (x -= 3)
	Equivalent (x = x - 3)
	*/
	x -= 3;
	cout << x << endl;
	/*
	Operator (*=)
	Name (Multiplication Assignment)
	Description (Multiplies a value by a variable)
	Example (x *= 7)
	Equivalent (x = x * 7)
	*/
	x *= 7;
	cout << x << endl;
	/*
	Operator (/=)
	Name (Division Assignment)
	Description (Divides a value by a variable)
	Example (x /= 2)
	Equivalent (x = x / 2)
	*/
	x = 10;
	x /= 7;
	cout << x << endl;
	/*
	Operator (%=)
	Name (Modulus Assignment)
	Description (Returns the remainder of a value divided by a variable)
	Example (x %= 4)
	Equivalent (x = x % 4)
	*/
	x %= 4;
	cout << x << endl;
	/*
	Operator (&=)
	Name (...)
	Description (...)
	Example (x &= 3)
	Equivalent (x = x & 3)
	*/
	//Fill this in
	/*
	Operator (|=)
	Name (...)
	Description (...)
	Example (x |= 3)
	Equivalent (x = x | 3)
	*/
	//Fill this in
	/*
	Operator (^=)
	Name (...)
	Description (...)
	Example (x ^= 5)
	Equivalent (x = x ^ 5)
	*/
	//Fill this in
	/*
	Operator (>>=)
	Name (...)
	Description (...)
	Example (x >>= 3)
	Equivalent (x = x >> 3)
	*/
	//Fill this in
	/*
	Operator (<<=)
	Name (...)
	Description (...)
	Example (x <<= 3)
	Equivalent (x = x << 3)
	*/
	//Fill this in

	//Comparison Operators
	/*
	Operator (==)
	Name (Equal to)
	Example (x == y)
	*/
	x = 5, y = 3;
	cout << (x == y) << endl;
	/*
	Operator (!=)
	Name (Not equal)
	Example (x != y)
	*/
	cout << (x != y) << endl;
	/*
	Operator (>)
	Name (Greater than)
	Example (x > y)
	*/
	cout << (x > y) << endl;
	/*
	Operator (<)
	Name (Less than)
	Example (x < y)
	*/
	cout << (x < y) << endl;
	/*
	Operator (>=)
	Name (Greather than or equal to)
	Example (x >= y)
	*/
	cout << (x >= y) << endl;
	/*
	Operator (<=)
	Name (Less than or equal ti)
	Example (x <= y)
	*/
	cout << (x <= y) << endl;
	//Logical Operators
	/*
	Operator (&&)
	Name (Logical and)
	Description (Returns true if both statements are true)
	Example (x < 5 && x < 10)
	*/
	cout << (x < 3 && x < 8) << endl;
	/*
	Operator (||)
	Name (Logical or)
	Description (Returns true if at least one of he statements is true)
	Example (x < 5 || x < 4)
	*/
	cout << (x == 5 || y == 3) << endl;
	/*
	Operator (!)
	Name (Logical not)
	Description (Reverses the result)
	*/
	cout << !(x < 5 && y > 2) << endl;
}