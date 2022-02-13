#include <iostream>

class Linkedlist
{
    public:
		int value;
	    Linkedlist *next;
	    Linkedlist *current;
	    void Insert(int num);
		void Reverse();
	    int Search(int value);
};