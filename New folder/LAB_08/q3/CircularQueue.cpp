#include "CircularQueue.h"

void CIRCULAR_QUEUE :: ENQUEUE(CIRCULAR_QUEUE *c , int num) {
	NODE *temp = new NODE; 
    temp-> value = num; 
    if (c-> front == NULL)
        c-> front = temp;

    else
        c-> current-> List = temp;

    c-> current = temp;
    c-> current-> List = c-> front;
}
void CIRCULAR_QUEUE :: DEQUEUE(CIRCULAR_QUEUE *c) {
	int num;
	if (c-> front == NULL)  
		cout << "Queue underflow!" << endl;

	if (c-> front == c-> current) {
	
	    num = c-> front-> value;
	    c-> front = NULL;
	    c-> current = NULL;
	}

	else {

		NODE* temp = c-> front;
		num = temp-> value;
		c-> front = c-> front-> List;
		c-> current-> List = c-> front;

	}
	cout << "Deleted Element --> " << num << endl;
}
void CIRCULAR_QUEUE :: DISPLAY(CIRCULAR_QUEUE *c) {

	NODE* temp = c->front;
    int i = 0;
    while (temp-> List != c-> front) {

		cout << "CIRCULAR_QUEUE["<< i <<"] --> " << temp->value << endl;
        temp = temp->List;
        i++;

    }
    cout << "CIRCULAR_QUEUE["<< i <<"] --> " << temp->value << endl;
    temp = temp->List;
}
