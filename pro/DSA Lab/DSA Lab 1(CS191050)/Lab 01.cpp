#include <iostream>
using namespace std;

int* createarray(int size);
void insertion(int* DSU,int size ,int pos,int value);
//void deletion(int *DSU,int size ,int pos);
void Overflow(int size);
void Underflow(int size,int pos);
void PRINT_ARRAY(int *DSU,int size);

int main()
{
    int size=0;
	int value=0;
	int pos=0;
	
	int selection=0;
	int s=0;
	cout<< "Enter size of Array :";
	cin>>size;
	int* DSU=0;
	DSU =  createarray(size);
	
	PRINT_ARRAY(DSU,size);

	
	do{
		cout<<"Enter int value: ";
		cin>>value;
		cout<<"\n";
		
		cout<<"Enter pos : ";
		cin>>pos;
		cout<<"\n";

		Overflow(size);
		insertion(DSU,size,pos,value);
		cout<<"Array After insertionion: "<<endl;
		PRINT_ARRAY(DSU,size);
		cout<<"You want to insertion or not press 0 for exit : ";
		cin>>selection;
	}
	while(selection!=0);
	
	
	do{
		cout<<"pos to deletion: ";
		cin>>pos;
		cout<<endl;
		
		Underflow(size,pos);
		//deletion(DSU,size,pos);

		size--;
		cout<<"New DSU after deletion: "<<endl;
		PRINT_ARRAY(DSU,size);
		
		cout<<"You want to deletion or not press 0 for exit: ";
		cin>>selection;
	}
	while(selection!=0);
	return 0;
}

int* createarray(int size)
{
	int *DSU=new int [size];
	for(int h=0;h<size;h++)
	{
		DSU[h]=0;
		
	}
	return DSU;
}

void insertion(int* DSU,int size ,int pos,int value)
{
    int h=0;
	for(int h=size-1; h>pos;h--)
	{
		DSU[h]=DSU[h-1];
	}
	DSU[pos]=value;
}
/*
void deletion(int *DSU,int size ,int pos)
{
	int h=0;
	for(h=pos;h<size-1;h++)
	{
		DSU[h]=DSU[h+1];
	}
	DSU[size]=0;
}
*/
void Overflow(int size)
{
        if(size==0)
		{
			cout<<"Error: UnderflOverflow";
		}
}

void Underflow(int size,int pos)
{
	if(pos>=size)
	{
		cout<<"Error: OverflOverflow \n";
	}
}

void PRINT_ARRAY(int *DSU,int size)
{
	for(int h=0;h<size;h++)
	{
		cout<<"DSU["<<h<<"] ="<<DSU[h]<<endl;
	}

}

