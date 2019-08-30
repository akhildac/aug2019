#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float farenHeit,centiGrade;
	cout<<"Enter Temperature in foreignHeit"<<endl;
	cin>>farenHeit;
	centiGrade=(farenHeit-32)*5/9;
	cout<<"The Temperature after Conversion is \n "<<centiGrade;
	
	
}
