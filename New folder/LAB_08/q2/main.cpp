#include "LINEARQUEUE.h"
#include<iostream>

int main() {
	LINEARQUEUE LQ;
	int num , ch;
	cout << "1 --> ENQUEUE\n2 --> DEQUEUE\n3 --> DISPLAY\n\n\tOr any number to EXIT!" << endl;
	
	while(1) {
	cout << "Input your choice --> ";
	cin >> ch;
		switch(ch) {
			case 1:
	
				cout << "Input number you wanna insert --> ";
		        cin >> num;
		        LQ.ENQUEUE(num);
		        break;
	
			case 2:
	
					LQ.DEQUEUE();
					break;
	
			case 3:
	
				LQ.Display();
				break;
	
			default:
				
				return 0;

		}
	}
	
	return 0;
}
