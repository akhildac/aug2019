#include <iostream>
using namespace std;
int n,Array[10];  	
void BubbleSort(){
	int temp=0,count=0,n;

	cout<<"Enter the Array Size : ";
	cin>>n;
	cout<<"Enter the Values into Array : "<<endl;
	for(int i=0;i<n;i++){
	
		cin>>Array[i];
		}
	cout<<"the elements before sorting are : "<<endl;
		 for(int i=0;i<n;i++){
			cout<<Array[i]<<endl;
		}	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(Array[j] > Array[j+1]){
		
			temp = Array[j+1];
			Array[j+1] = Array[j];
			Array[j] = temp;
			
		}
		count++;
		
		}
		



}
cout<<"the elements after sorting are:"<<endl;
	for(int i=0;i<n;i++){
			cout<<Array[i]<<endl;
				}
		
cout<<"Count : "<<count<<endl;
	
}



int main() {
	BubbleSort();

	return 0;
}


