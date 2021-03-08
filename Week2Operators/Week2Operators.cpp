// Week2Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	bool isTrue = true;

	a = 3;
	b = 2;
	c = 8;
	d = 9;
	e = 10;



	cout << "sum of a and b: " << a + b << endl;
	cout << "difference of a and b: " << d - c << endl;
	cout << "product of a and b: " << e * b << endl;
	cout << "qoutient of e and b: " << e / b << endl;
	cout << "Remainder when c divided by d is " << e % a << endl;

	cout << std::boolalpha;
	cout << "is d greater than e " << (d > e);
	

}
