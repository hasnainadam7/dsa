#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char string[] = "I like to study;";
	int count = 0;
	
	
	
	for(int i=0; i < strlen(string) ;  i++)
	{
		if(string[i] != ' '){
		
			count++;
}
	}
	
	cout<<"Total number of character is :"<<count;
	return 0;
}
