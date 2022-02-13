#include<iostream>
#include <string>
using namespace std;

 
void Deletion(int* isbn, string *title,int  *pricee){
	int pos = {0};
	cout<<"position to delete: ";
	cin >>pos;
	
	title[pos] = "\0";
	pricee[pos] = NULL;
	isbn[pos] = NULL;
	
}

void Insertion(int* isbn, string* title, int* pricee)
{
	int isbn = {0};
	int title;
	int price = {0};
	int pos;
	cin >>isbn;
	cin >> title;
	cin >> price;
	cin >> pos;
	
	isbn[pos] = isbn;
	title[pos] = title;
	pricee[pos] = price;

}


int main()
{
	int isbn[10]={8765342,8765343,8765344,8765345,8765346,8765347,8765348,8765349,8765350,8765351};
    string title[10]={"Thinking in Java ","Thinking in C++","Java- How to Program,Data Structures in C++","English Composition","C# - Best Practices","Thinking sharp","How to Think Big","Presentation Secrets"};
	int pricee[10]={1000,1400,600,1000,500,1500,1000,1200,500,500};
   	
	Insertion(isbn, title, pricee);
   	Deletion(isbn, title, pricee);
}
