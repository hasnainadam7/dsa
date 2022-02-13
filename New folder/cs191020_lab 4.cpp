#include<iostream>
using namespace std;
void mergearr(int a1[],int a2[],int n1,int n2,int a[]) {
	int k=0;
	for(int i=0;i<n1 || i<n2;i++) {
		a[k]=a1[i];
		k++;
		a[k]=a2[i];
		k++;
	}
}
void sortarr(int a[] , int n) {
	int temp;
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j] > a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}
int main() {
	int a1[5] = {9,3,7,5,1};
	int a2[5] = {4,8,6,2,10};
	int a[10];
	cout<<"Before merging."<<endl;
	for(int i=0;i<5;i++) {
		cout<< "a1[" << i <<"] --> "<< a1[i] << endl;
	}
	for(int i=0;i<5;i++) {
		cout<< "a2[" << i <<"] --> "<< a2[i] << endl;
	}
	mergearr(a1,a2,5,5,a);
	cout<<"After merging."<<endl;
	for(int i=0;i<10;i++) {
		cout<< "a[" << i <<"] --> "<< a[i] << endl;
	}
	sortarr(a,10);
	cout<<"After sorting."<<endl;
	for(int i=0;i<10;i++) {
		cout<< "a[" << i <<"] --> "<< a[i] << endl;
	}
	
}
