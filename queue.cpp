#include <iostream>
using namespace std;
int max=4,front=-1,rear=-1,queueArray[5];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void getmenu(){
	cout<<"enter 1 to insert"<<endl<<"enter 2 to delete"<<"enter 3 to delete";
}
void insert()
{
	int e;
	if(rear==max){
		cout<<"queue is full you can not insert element";
		}
		if(front==rear){
			front++;
			rear++;
			cout<<"enter element to be inserted into Queue";
			cin>>e;
			rear++;
			queueArray[rear]=e;
			cout<<"the inserted element is    :"<<e;
		}
		else{
			cout<<"enter element to be inserted into Queue";
			cin>>e;
			rear++;
			queueArray[rear]=e;
			cout<<"the inserted element is    :"<<e;
		}
}
void delete(){
	if(front>max){
		cout<<"queue is empty,there is nothing to delete";
		}
		else{
			
			cout<<"the deleted element is :  "<<queueArray[front];
			front++;
		}
}
void dispaly(){
	for(i=0;i<max;i++){
		cout<<the elements in the queue are  :<<queueArray[i];
	}
}
int main() {
	do{
	getmenu();
	int choice;
	cin>>choice;
	switch(choice){
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
		   display();
		   break;
		   default:
		   cout<<"entered invalid choice";	
	}
}while(front<=max);
