#include <iostream>
#include "Linkedlist.h"

Linkedlist *head = NULL; 
void Linkedlist::Insert(int num)
{
	Linkedlist *newLinklist = new Linkedlist;
    newLinklist->value = num;
    newLinklist->next = head;
    head = newLinklist;
}
void Linkedlist::Reverse()
{
	if(head == NULL)
	{
        std::cout << "List Empty!" << std::endl;
        return;
    }
    Linkedlist *temp = head;
    while(temp!=NULL)
	{
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
int Linkedlist::Search(int value)
{
	int index = 0;              
	Linkedlist *temp = head;
	while(temp!=NULL)
	{
		if(temp->value == value)
		{         
			std::cout << "\nSearching the given node after Reversing at: " << index << std::endl;               
		}
		temp = temp->next;
		index++;
	}   
   return 1;            
}