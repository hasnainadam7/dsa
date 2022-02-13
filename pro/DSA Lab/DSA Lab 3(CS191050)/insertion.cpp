#include<iostream>
using namespace std;
int main()
{
	int i,j;
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

	for(i=0;i<9;i++)
	{
		temp=array[i][1];
		j=i-1;
		while((j>=0) && (array[j][1]>temp)  )
		{
			array[j+1][1]=array[j][1];
			j=j-1;
			cout<<array[i][j]<<" " << "\n";	
		}
		array[j+1][1]=temp;	
	}
return 0;
}
