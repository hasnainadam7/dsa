#include<iostream>
#define MAX 5

using namespace std;

int main()
{
	int array[MAX] = {2,3,4,5};
	int i=0;
	int value =1;
	
	cout<<"Printing array before insertion "<< endl;
	for(i=0; i< MAX ;i++)
	{
		cout<<" Array["<<i<<"]: " << array[i]<<endl;
		
	}
	
	for(i=MAX-1 ;i>=0; i-- )
	{
		array[i+1]=array[i];
		
	}
	
	array[0] = value;
	
	cout <<"printing array after insertion:"<<endl;
	
	for(i=0; i<MAX; i++)
	{
		cout<<"Array["<<i<<"]: " <<array[i]<<endl;
	}
	
	return 0;
	
}
