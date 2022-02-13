#include<iostream>
#include<string.h>
using namespace std;
void bubblesort(string table[9][4] , int size1 , int size2) {
	string temp;
	for(int i=0;i<size1-1;i++) 
		for(int j=0;j<size1-i-1;j++) {
			if(table[j][1] > table[j+1][1]) {
				for(int z=0;z<4;z++) {
					temp=table[j][z];
					table[j][z]=table[j+1][z];
					table[j+1][z]=temp;
				}
			}
		}
	}

int main() {
string table[9][4] = 	{	
							{
								{"CS13102"},{"Tom"},{"CS102"},{"PF"}
							},
							{
								{"CS10156"},{"Jerry"}, {"CS306"},{"DE"},
							},
							{
								{"CS56782"},{"Blossom"},{"CS404"},{"PIT"},
							},
							{	
								{"CS12470"},{"Buttercup"},{"CS102"},{"PF"},
							},
							{
								{"CS10111"},{"Bubbles"},{"CS404"},{"PIT"},
							},
							{
								{"CS13026"},{"Sylvester"},{"CS102"},{"PF"},
							},
							{	
								{"CS13025"},{"Bunny"},{"CS404"},{"PIT"},
							},
							{
								{"CS10101"},{"Daffy"},{"CS101"},{"ITC"},
							},
							{
								{"CS16024"},{"Tweety"},{"CS236"},{"CAL"}
							}
						};
	bubblesort(table,9,4);
	cout<<"Roll number\tName\t\tCourse code\tCourse name\n";
	for(int i=0;i<9;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<10;k++) {
				cout << table[i][j][k] ;
			}
			cout<<"\t";
		}
		cout<<endl;
	}
}

