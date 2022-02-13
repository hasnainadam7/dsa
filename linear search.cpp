#include<iostream>
using namespace std;

int search(int* arr , int size, int element)
{
	for (int i=0; i<size; i++)
	{
		if(arr[i]==element)
		return i;	


	}
	return -1;
}

int main()
{
	int size=0, searchElement=0, resultIndex=0;
	int* arr = new int[size];
	int num=1;
	
	for (int i=0; i<size; i++)
	{
		arr[i]=i+1;
		cout<<"Array Element["<<i<<"]:"<< i << endl;
	}
	cout<<"Enter number you want to search:";
	cin>> searchElement;
	
	resultIndex= search(arr,size,searchElement);
	
	if(resultIndex == -1)
		cout<<"Element not found"<<endl;
		
	else
		cout<<"Enter found at index:"<<resultIndex<<endl;
		
	return 0;
	
}
