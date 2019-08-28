#include"pch.h"
#include <iostream>
using namespace std;
int max = 4, front = -1, rear = -1, queueArray[5];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void getmenu() {
	cout << "enter 1 to insert" << endl << "enter 2 to delete" <<endl<< "enter 3 to display";
}
void insert()
{
	int e;
	if (rear == max) {
		cout << "\nqueue is full you can not insert element";
	}
	if (front ==-1) {
		front++;
		rear++;
		cout << "enter element to be inserted into Queue\n";
		cin >> e;
		queueArray[rear] = e;
		cout << "\nthe inserted element is    :\n" << e;
	}
	else {
		cout << "\nenter element to be inserted into Queue\n";
		cin >> e;
		rear++;
		queueArray[rear] = e;
		cout << "\nthe inserted element is    :" << e<<"\n";
	}
}
void ddelete() {
	if (front ==-1) {
		cout << "\nqueue is empty,there is nothing to delete\n";
	}
	else if (front == rear) {
		front = -1;
		rear = -1;
	}
	else {

		cout << "\nthe deleted element is : \n " << queueArray[front];
		front++;
	}
}
void display() {
	cout << "\n the elements in the queue are\n :";
	for (int i = 0;i <= rear;i++) {
		cout << queueArray[i]<<endl;
	}
}
int main() {
	int choice;
	do {
		getmenu();
		
		cin >> choice;
		switch (choice) {
		case 1:
			insert();
			break;
		case 2:
			ddelete();
			break;
		case 3:
			display();
			break;
		default:
			cout << "\n entered invalid choice";
		}
	} while (choice <= 3);
}
