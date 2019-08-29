#include <iostream>
using namespace std;

int n;
int a[10],temp=0;
void AcceptValue(){
	
	
	cout<<"Enter Size of Array : "<<endl;
	cin>>n;
	cout<<"Enter Elements into Array : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"The Elements Entered into Array are : "<<endl;

    	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}

}

void InsertionSort(){
	
	for(int i=1;i<n;i++){
	     	temp = a[i];
	    	int j=i-1;
		    while((j>=0)&&(a[j]>temp)){	
			a[j+1]=a[j];
			j--;	
	    }
		a[j+1]=temp;
	}
}


void Display(){
	
	cout<<"The Sorted Order is : "<<endl;

    	for(int j=0;j<n;j++){
		cout<<a[j]<<endl;
	}
	
}

int main() {
	
	AcceptValue();
	InsertionSort();
	Display();
	return 0;
}
