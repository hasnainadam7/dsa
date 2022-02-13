#include <iostream>
#include "Linkedlist.h"

int main()
{
	Linkedlist l;
    l.Insert(1);
    l.Insert(2);
    l.Insert(3);
    l.Insert(4);
    l.Insert(5);
	std::cout << "\nGiven Data: 1  2  3  4  5" << std::endl;
	l.Reverse();
	l.Search(2);
}
