#include<iostream>
using namespace std;
int check = 0;
void LinearSearch(int a[] , int val);
int main() {
	int value;
	int arr[100];
	for(int i = 0 ; i < 100 ; i++) {
		arr[i] = i;
		cout<<"array[" << i << "] --> " << arr[i] << endl;
	}
	cout << "Input value! you want to search --> ";
	cin >> value;
	LinearSearch(arr,value);
}
void LinearSearch(int a[] , int val){
	int Iter = 0;
	for(int i = 0 ; i < 100 ; i++){
		Iter++;
		if (i == val){
			cout << "Reccomended value is present at index --> " << i << " and the value is --> " << a[i] << endl;
			cout << "# of Iterations --> " << Iter << endl;
			check = 1;
			break;
		}
	}
}
