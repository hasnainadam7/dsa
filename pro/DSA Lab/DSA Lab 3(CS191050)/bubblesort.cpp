#include<iostream>
using namespace std;
int main()
{
	int a,b;
	std:string temp;
	std::string array[9][4]={{"cs13102","Tom","cs102","pf"},
	{"cs10156","Jerry","cs306","de"},
	{"cs58572","Blossom","cs404","pIT"},
	{"cs12470","Buttercup","cs102","pf"},
	{"cs10111","Bubbles","cs404","pIT"},
	{"cs13062","Sylvester","cs102","pf"},
	{"cs13025","Bunny","cs404","pIT"},
	{"cs10101","Daffy","cs101","ITC"},
	{"cs16024","Tweety","cs236","cal"}};
	
	for(a=0;a<9;a++)
	{
		for(b=0;b<4;b++)
		{
			if (array[a][1] > array[a+1][1])
			{
				temp =array[a][b];
				array[a][1]=array[a+1][1];
			    array[a+1][1]=temp;
			    //cout<<array[a][b]<<" ";	
			}
			cout<<array[a][b]<<" " << "\n";	
		}
	}
}
	
	
	
	
	
	
	
	

