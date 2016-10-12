// Exercise02.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

using namespace std;

//int add(int x, int y) {
//
//	return x + y;
//}

//int minus(int x, int y);

//Exercise 2-1
//void product(int x, int y) {
//	cout << x << '*' << y << '=' << x * y << endl;
//}

//Exercise 2-2
double quotient(double x, int y) {
	return x / y;
}

int main() {

	//int a, b, c, exit;
	
	//Exercise 2-1
	//int a, b;

	//Exercise 2-2
	double a; 
	int b;

	cout << "Please type in a number" << "\n";
	cin >> a;

	cout << "Please type in another number" << "\n";
	cin >> b;

	//Exercise 2.1
	//product(a,b);

	//Exercise 2-2
	cout << a << '/' << b << '=' << quotient(a, b) << endl;


	//c = add(a, b);

	//cout << a << '+' << b << '=' << c << "\n";

	//cout << "enter another number to exit" << "\n";

	//cin >> exit;

	system("pause");
	return 0;
}

//int minus(int x, int y) {
//
//	return x - y;
//}

