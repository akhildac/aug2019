#include<iostream>
#include<conio.h>
using namespace std;

void zero_small(int *,int *);
void zero_small(int *c, int *d) {
	if (*c > *d) {
		*d = 0;
	}
	else {
		*c = 0;
	}
}


int main() {
	int a, b;

	cout << "Enter value for a: ";
	cin >> a;
	cout << "\nEnter value for b: ";
	cin >> b;
	zero_small(&a, &b);

	cout << "a = " << a;
	cout << "\nb = " << b;

	_getch();
	return 0;
}