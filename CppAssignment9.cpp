#include "pch.h"
#include <iostream>

using namespace std;

int arrSize{};
int *myArray = new int[arrSize];

void accept(int *, int);
void display(int *, int);

int main()
{
	
	int choice;
	bool processing{ true };

	do {
		cout << "<------ MENU ------>\nAdding Elements--------->Press 1\nDisplaying Elements----->Press 2\nExit ------------------->Press 0\n>> ";
		cin >> choice;
		switch (choice)
		{
		case 1:{
			cout << "Enter number of elements: ";
			cin >> arrSize;

			accept(myArray, arrSize);
			break;
		}
			
		case 2: {
			display(myArray, arrSize);
			cout << endl;
			break;
		}
		case 0: {
			break;
		}
		default: {
			cout << "Invalid Choice";
			break;
		}
		}
	} while (choice<3 && choice !=0 );
	
	
}

void accept(int *arr, int aSize) {
	int element;
	cout << "Enter the elements: "<<endl;
	for (int i = 0;i < aSize;i++) {
		cin >> element;
		arr[i] = element;
	}
}

void display(int *arr, int aSize) {
	for (int i = 0;i < aSize;i++) {

		cout << arr[i] << " ";
	}
}