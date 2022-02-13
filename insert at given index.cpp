#include<iostream>
#define MAX 5

using namespace std;

int main()
{
	int array[MAX]={1,2,4,5};
	int index=2;
	int value=3;
	int i=0;
	
	cout<<"printing array before insertion:"<<endl;
	for(i=0; i<MAX;i++)
	{
		cout<<"array["<<i<<"]:"<<array[i]<<endl;
		
	}
	
	for(i= MAX-1; i>=index;i--)  //jab ya index 2 pr aye ga loop break hojaye ga
	{
		array[i]=array[i-1];
		
	}
	
	array[index]=value;
	
	cout <<"printing array after insertion:"<<endl;
	
	for(i=0;i<MAX;i++)
	{
		cout<<"Array["<<i<<"]:"<< array[i]<<endl;
		}	
	
	return 0;
	
	
	
}
