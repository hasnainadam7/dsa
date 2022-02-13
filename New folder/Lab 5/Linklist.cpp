#include<iostream>
#include "Linklist.h"

LinkList::LinkList() {
    	Head = NULL;
        Current = NULL;
}

void LinkList::Add_node(int Value) {
	node *Temp= new node(Value);
	Temp-> Data =Value;
	Temp-> Next =NULL;
	if(Head == NULL) {
		Head = Temp;
		Current = Temp;
	}
	else {
		Current-> Next = Temp;
		Current = Current-> Next;
	}
}

int LinkList :: Search_node(int Value) {
	node *Temp = Head;
	bool Count = false;
	int i = 1;
    while (Temp != NULL) {
		if(Temp-> Data == Value) {
			Count = true;
			break;
		}
		else {
			++i;
			Temp = Temp-> Next;
		}
	}
	if (Count) {
		cout << "User given node is available in the list #Search_Found!" << endl;
	}
	else {
		cout << "User given node is  not available in list #search_Not_Found!" << endl;
	}
	LinkList :: Print();
}

void LinkList :: Delete_node(int Pos) {
	if (Head == NULL) {
		cout << "User given list is empty" << endl;
	}
	else {
		node *Temp = Head;
		for(int i = 1 ; i < Pos - 1 ; ++i) {
			Temp = Temp-> Next;
		}
		Temp->Next=Temp->Next->Next;
	}
	cout << "After deleting node '"<< Pos <<"' new  list is : " << endl;
	LinkList :: Print();
}

void LinkList :: Reverse_traversal() {
	node *Current = Head;
	node *Prev = NULL;
	node *Next = NULL;
	while(Current != NULL) {
		Next = Current-> Next;
		Current-> Next = Prev;
		Prev = Current;
		Current = Next;
	}
	Head = Prev;
	node* Temp = Head;
	int i = 9;
    while (Temp != NULL)  {
        cout << "list["<< i <<"] --> " <<Temp-> Data << endl;
        Temp = Temp-> Next;
        i--;
    }
    cout << endl;
}

void LinkList :: Print() {
    node* Temp = Head;
    int i = 0;
    while (Temp != NULL)  {
        cout << "list["<< i <<"] --> " <<Temp-> Data << endl;
        Temp = Temp-> Next;
        i++;
    }
    cout << endl;
}
