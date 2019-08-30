#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int input{};
	string ans;

	cout << "Enter a number: ";
	cin >> input;

	cout << "Entered number is: ";
	cout << ((input < 0) ? "Negative" : "Positive")<<endl;
}

