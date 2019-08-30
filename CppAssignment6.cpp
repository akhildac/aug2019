#include "pch.h"
#include <iostream>
#include<cstdio>

using namespace std;

int length{};
char* revFunc(char *);

int main()
{
	char *myString = new char[30];
	int length;

	cout << "Enter a string:";
	cin >> myString;
	
	cout << endl;
	
	cout<<"Reverse of string is : "<<revFunc(myString)<<endl;
}

char* revFunc(char *str) {
	char temp;
	int j{};
	j = strlen(str)-1;
	for (int i = 0;i <= j;i++,j--) {  //--------reversing block
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return str;
}
