#include <iostream>


using namespace std;
//global variable
int size=0;
static int arr[0];
int top=0;

int* createArr(int size){
	//static int arr[size];
	arr[size];
	for(int j=1;j<=size;j++)
	{
	arr[j]=0;
	}
	return arr;	
	
};
int* push(int value){
	arr[top]=value;
	top++;
	return arr;
}
void* pop(int insert[]){
	
	//int element=arr[top];
	cout<<"\nPOP ["<<top<<"]: "; 
	cout<<insert[top-1];
	top--;
	//return 0;
}
int isEmpty(){
	return -1;
}
int main(){
	
	
	int size=0;
	char check='y';
	int value=0;
	cout<<"Enter size\n";
	cin>>size;
	
	int * arr=createArr(size);
	int * insert;
		cout<<"Enter Values\n";
	
	for(int i=1;i<=size;i++){
		cout<<"PUSH["<<i<<"] :";		
		cin>>value;
	 insert=push(value);
	
	}
	//int *delete;
	//for(int k=0;k<size;k++){
	//	cout<<" ";
//	cout<<insert[k];}
	
	while(true){
		
		
		pop(insert);
		if(top==0){
			cout<<"\nAll Elements of stack are Popped ";
			break;
		}
		cout<<"\nFor pop more elements type y & for Exit type Any :";
		cin>>check;
		if(check!='y'){
		break;}
	}

}
