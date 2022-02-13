#include<iostream>
#include<utility>
using namespace std;

void LinearSearch (int a[] , int size , int val);
int main() {
	int size;
	cout << "Input size of the array --> ";
	cin >> size;
	int arr[size];
	for(int i = 0 ; i < size ; i++) {
		if(i % 2 == 0)
			arr[i] = i;
		else
			arr[i] = i + 1;
			
		cout << "array["<< i <<"] --> " << arr[i] << endl;
	}
	int value;
	cout << "Input value! you want to search --> ";
	cin >> value;
	LinearSearch(arr,size,value);
}
void LinearSearch (int a[] , int size , int val){
		for(int i = 0 ; i < size ; i++)
			if (a[i] == val)
				cout << "Reccomended value is present at index --> " << i << " and the value is --> " << a[i] << endl;
}
