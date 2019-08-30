#include<iostream>
#include<conio.h>

using namespace std;


int factorial(int a) {
	if (a <= 1)
		return 1;
	else
		return (a * factorial(a - 1));
}
int main() {
	int n, ans;
	cout << "Enter number to find factorial: ";
	cin >> n;
	ans = factorial(n);
	cout << "Factorial of " << n << " is :" <<ans ;

	_getch();
	return 0;
}