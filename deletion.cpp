#include<iostream>
using namespace std;

int main()
{
	int LA[]={1, 3, 5, 7, 8};
	int j=3, n=5;
	int i;
	
	cout <<"The origional array element are:"<< endl;
	
	for (i=0; i < n ; i++)
	{
		cout<< "Array["<< i <<"]: "<< LA[i]<<endl;
		
	}
	
	while(j<n)
	{
		LA[j-1] = LA [j];
		j = j+1;
	}
	
	n = n-1;
	
	cout<< "The array element after deletion"<<endl;
	
	for(i=0; i<n; i++)
	{
		cout<<"Array["<< i <<"]: "<<LA[i]<<endl;
	}
	
	return 0;
	
}
