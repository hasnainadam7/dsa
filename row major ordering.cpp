#include<iostream>
using namespace std;

int main(){
	int arr2D[10][10], *arr1D;
	int n, m, i, j;
	
	cout<<"Enter number of rows:";
	cin >>n;
	cout<<"Enter number of colume:";
	cin >> m;
	
	cout<<"Enter 2D array:";
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr2D[i][j];
		}
	}
	
	cout<<endl<<"2D Array:"<<endl;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<arr2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	arr1D = new int[n*m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			arr1D[i*m+j] = arr2D[i][j];
		}
	}
	
	cout<< endl<<"1D array:";
	for(i=0;i<n*m;i++){
		cout<<arr1D[i]<<" ";
	}
	
	
}
