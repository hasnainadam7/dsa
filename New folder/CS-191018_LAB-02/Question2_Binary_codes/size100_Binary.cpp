#include<iostream>
#include<cmath>
using namespace std;
int check=0;
void BinarySearch(int a[],int val);
int main() {
	int arr[100];
	for(int i = 0 ; i < 100 ; i++) {
		arr[i] = i+100;
		cout<<"array[" << i << "] --> " << arr[i] << endl;
	}
	int value;
	cout << "Input value! you want to search --> ";
	cin >> value;
	BinarySearch(arr,value);
	if(check == 0)
		cout << "Value isn't present";
}
void BinarySearch(int a[],int val){
	int L = 0 , M = 0 , Iter=0 , R=99;
	while(L <= R) {
		Iter++;
		M = ceil((L + R) / 2);
		if(a[M] == val){
			cout << "Reccomended value is present at index --> " << M << " and the value is --> " << a[M] << endl;
			cout << "# of Iterations --> " << Iter << endl;
			check = 1;
			break;
		}
		else if(a[M] > val)
			R=M-1;

		else 
			L=M+1;

	}
}
