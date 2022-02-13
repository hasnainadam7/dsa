#include<iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
	int i=0, j=0, k=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i] < arr2[j]){
		
			arr3[k] = arr1[i];
			i++;
			k++ ;
	}
		else {
		
		arr3[k]=arr2[j];
		j++;
		k++;
		}
	}

	while(i < n1)
	
		arr3[k++] =arr1[i++];

	while( j < n2)
		arr3[k++] = arr2[j++];
}

int main()
{
	int arr1[]= {1,8,10,12};
	int n1=4;
	
	int arr2[]={1,2,3,4,5,6,7,8,9,11,2,1,11,45,5,5};
	int n2=16;
	
	int arr3[n1+n2];
	mergeArrays(arr1,arr2,n1,n2,arr3);
	
	cout<< 	"Array after merging:"<<endl;
	for(int i=0; i<n1+n2;i++)
	cout<<arr3[i]<<endl;
	
	return 0;
}

