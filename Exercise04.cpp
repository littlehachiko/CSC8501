// Exercise4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//Exercise 4-1
/*void swap(int *x, int *y) {
	int *temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 1, b = 2;
	
	cout << 'a' << '=' << a << endl;
	cout << 'b' << '=' << b << endl;

	swap(a, b);
	
	cout << 'a' << '=' << a << endl;
	cout << 'b' << '=' << b << endl;

	int num;
	cout << "Please type in any number" << endl;
	cin >> num;

    return 0;
}*/

//Exercise 4-2
void printarray(int* x) {
	for (int i = 0; i < 10; i++) {
		cout << *x <<endl;
		x++;
	}
}

int main(){
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num;
	int *a = &arr[0];

	printarray(a);

	cout << "Please type in any number" << endl;
	cin >> num;
	return 0;
}