#include<string.h>
#include<iostream>

using namespace std;
	
void patternmatch(char pat[], char txt[]){
	int M = strlen(pat);
	int N = strlen(txt);
	
	for(int i=0; i<= N-M ; i++) {
		int j;
		
		for(int j=0; j<M ; j++)
			if(txt[i+j] != pat[j])
				break;
		
		
		if(j==M)
			cout<<"pattern found at index"<<i<<endl;
	}
}








int main(){
	char txt[]= "i like to study. i want to study,";
	char pat[]= "i";
	
	patternmatch(pat, txt);
	return 0;
}
