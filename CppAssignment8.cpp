
#include "pch.h"
#include <iostream>

using namespace std;

int arrSize{};

void accept(int *,int);
void display(int *,int);
int sum(int *,int);
double avg(int,int);
int main()
{
	
	int *myArray= new int[arrSize];
	int eSum{};
	double eAvg;

	cout << "Enter number of elements: ";
	cin >> arrSize;

	cout << "Enter " << arrSize << " elements: ";
	accept(myArray,arrSize);

	cout << "Entered elements are: ";
	display(myArray, arrSize);

	eSum = sum(myArray,arrSize);
	eAvg = avg(eSum, arrSize);

	cout << "\nSum of elements: " << eSum;
	cout << "\nAverage of elements: " << eAvg;
}

void accept(int *arr, int aSize) {
	int element;
	for (int i = 0;i < aSize;i++) {
		cin >> element;
		arr[i] = element;
	}
}

void display(int *arr,int aSize) {
	for (int i = 0;i < aSize;i++) {
		
		cout<<arr[i]<<" ";
	}
}

int sum(int *arr, int aSize) {
	int aSum{};
	for (int i = 0;i < aSize;i++) {
		aSum += arr[i];
	}
	return aSum;
}

double avg(int aSum, int aSize) {
	double aAvg;
	aAvg = aSum / aSize;
	return aAvg;
}