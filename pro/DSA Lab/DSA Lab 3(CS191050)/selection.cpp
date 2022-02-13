#include<iostream>
using namespace std;
int main()
{
	int a,b,pos_min;
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

	for(a=0;a<9-1;a++)
	{
		pos_min=a;
		for(b=a+1;b<4;b++)
		{		
			if (array[b][1] > array[pos_min][1])
			{
				pos_min=b;
			}
			if (pos_min!=a)
			{	
				temp == array[a];
				array[a][1]=array[pos_min];
			    array[pos_min]=temp;
			}		
		}
		for(int i=0;i<9;i++)
		{
			for (int j=0; j<4;j++)
			{
				cout<<array[i][j]<<" ";	
			}
			cout<<endl<<endl;
		}
	}
}
	
	
	
