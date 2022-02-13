#include <iostream>
#define MAX 5
using namespace std;

int main()
{
	int array[MAX]= {1, 2, 4, 5};
	int i=0;		//loop variable
	int index = 2; 	//index location to insert new value
	int value =3;	//new data element to be inserted
	
	//print array before insertion 
	cout<< "Printing array before insertion"<< endl; 
	for (i=0; i < MAX; i++)
	{
		cout<< "Array["<<i<<"]: " <<array[i] << endl;
	}
	
	//now shift rest of the element downwards
	for (i = MAX -1; i >=index ; i--)
	{
		array[i] = array[i-1];
	}
	
	//add new element at first position
	array[index] = value;
	
	//print to confirm
	cout<<"Printing array after insertion"<<endl;
	
	for (i=0; i<MAX ; i++)
	{
		cout<< " Array["<<i<<"]: "<<array[i]<<endl;
	}
	
	return 0;
}
