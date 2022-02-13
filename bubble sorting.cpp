// bubble sort

#include<iostream>
using namespace std;

//sort array of size n using bubble sort

void bubbleSort(int arr[], int n)
{
	int i, j, temp ;
	for(i=0 ; i < n-i-1; i++)
	{
		//last i element are already in place
		
		for(j=0;j< n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
			
		}
	}
}

int main()
{
	int n, i;
	cout<<"Enter number of element:";
	cin>> n;
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter Element "<<i+1<<": ";
		cin >>arr[i];
	}
	
	bubbleSort(arr,n);
	cout << "\nSorted Data: ";
	for(i=0; i<n; i++)
	
	cout<<arr[i]<<"\n";
	
	return 0;

























	
}
