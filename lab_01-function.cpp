#include<iostream>
using namespace std;

// creating a dynamic array 
int *createArray(int size)
{
	int *arr = new int[size];
	
	for(int i=0; i<size ; i++)
		arr[i] = 0 ;	
	
	return arr;
}

//insertion in Array
void insertAt(int *arr , int size , int index, int value)
{
	int i=0; 
	for ( i=size-1 ; i> index ; --i)
	{ 
		arr[i] = arr[i-1];
	}
	
	arr[index] = value;

}

// deletion from Array 
void deleteFrom(int *arr, int size, int index)
{
	int i=0;
	
	for(i=index; i< size-1; i++)
	{
		arr[i] = arr[i+1];
	 } 
}

// printing an array

void printArray(int *arr, int size)
{
	for (int i=0; i<size; i++)
	std:: cout<< "arr["<<i<<"] =" << arr[i] << std:: endl;
}

// main function
int main()
{
	// creating array
	int size=0, value =0, index=0;
	char ch=0;
	
	cout<< "Enter size of Array :";
	cin>>size;
	int *arr = createArray(size);
	
	printArray(arr,size);
	
	//insertion in Array
	
	do{
		cout<<"Enter value you want to insert:";
		cin>>value;
		cout<< endl;
		
		cout<< "Enter index you to insert element at:";
		cin>>index;
		cout<<endl;
		
		insertAt(arr,size,index,value);
		
		cout <<"Array After insertion"<< endl;
		
		printArray(arr,size);
		
		cout<<"Wish to insert again?? (y/n) ";
		cin >> ch;
		
	}
	
	while(ch!='n');
	
	//deletion from array
	
	do{
		cout <<"Enter index you want to delete from : ";
		cin >>index;
		cout<<endl;
		
		deleteFrom(arr,size,index);
		
		cout<<"Arrya After deletion "<<endl;
		
		printArray(arr,size);
		
		cout <<"wish to delete again ?? (y/n)";
		cin>>ch;
	}
	while(ch!='n');
	
	return 0;
}











