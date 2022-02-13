#include "CircularQueue.h"
int main() {
	int num , choice;
	CIRCULAR_QUEUE CQ;
	NODE *New = new NODE;
	CQ.front = NULL;
	CQ.current = NULL;
	
	cout << "1 --> ENQUEUE\n2 --> DEQUEUE\n3 --> DISPLAY\n\n\tOr any other number to exit" << endl;

	while(1) {

		cout << "Enter your choice --> ";
		cin >> choice;
		switch(choice) {
			case 1:

				cout << "input number you wanna insert --> ";
				cin >> num;
				CQ.ENQUEUE(&CQ , num);
				break;

			case 2:

				CQ.DEQUEUE(&CQ);
				break;

			case 3:

				CQ.DISPLAY(&CQ);
				break;

			default:

				return 0;

		}
    }
    return 0;
}
