#include<iostream>
using namespace std;
void compareTwoValuesWithoutAssAndAri(int a,int b){
	
	if((a^b)){
		cout<<"\nThe given two numbers are not equal";
		}
	
	else{
	
	cout<<"\nThe given two numbers are equal";
	}
}


int main(){
	int firstNumber,secondNumber;
	cout<<"Enter  FIRST number"<<endl;
	cin>>firstNumber;
	cout<<"\nEnter  SECOND number"<<endl;
	cin>>secondNumber;
	compareTwoValuesWithoutAssAndAri(firstNumber,secondNumber);
	return 0;
	
	
}
