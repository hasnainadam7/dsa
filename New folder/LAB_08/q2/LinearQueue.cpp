#include "LINEARQUEUE.h"
#include<iostream>

LINEARQUEUE :: LINEARQUEUE() {

	this-> front = NULL;
	this-> current = NULL;

}
bool LINEARQUEUE :: check_Full() {

	NODE *temp=new NODE;

	if(temp==NULL)
		return true;

	else
		return false;

}
void LINEARQUEUE :: ENQUEUE (int num) {

	NODE *temp = new NODE;

    if(check_Full()) {

        cout << "Queue overflow!!!" << endl;

    }

    temp-> value = num;
    temp-> next = NULL;

    if(front == NULL)
        front = current = temp;

    else {

		current-> next = temp;
		current = temp;

    }

	cout << "Inserted element in LINEARQUEUE --> " << num << endl;

}

bool LINEARQUEUE :: check_Empty() {
	if(front==NULL)
		return true;
	
	else
		return false;
}
void LINEARQUEUE::DEQUEUE() {
	if ( check_Empty() )
        cout << "Queue underflow!!!" << endl;

	NODE *temp = front;
	front = front-> next;
	cout << "Deleted Element --> " << temp-> value << endl;

}
void LINEARQUEUE::Display() {
	if(front==NULL)
        cout << "Queue is empty" << endl;

	NODE *temp = front;
	int i = 0;
    while(temp) {
        cout << "QUEUE[" << i << "]" << temp-> value << endl;
        temp=temp->next;
        i++;
    }
}
