// Exercise3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//Exercise 3-1
/*bool judge(int x) {
	if (x >= 0) {
		return true;
	}
	else {
		return false;
	}
}*/

//Exercise 3-2
/*void judge(int x) {
	while (x >= 0) {
		cout << "Please type in a number" << endl;
		cin >> x;
	}*/

	//Exercise 3-3
void judge(int x) {
	
	cout << "Please type in a number" << endl;
	cin >> x;
	if (x >= 0) {
		judge(x);
	}
}

int main()
{
	int a;

	cout << "Please type in a number" << endl;
	cin >> a;

	judge(a);

	//Exercise 3-1
	/*
	cout << judge(a) << endl;
	system("pause");*/

    return 0;
}

