#include<iostream>
using namespace std;

int Queue[50];
int size = 50 , front = -1 , current = -1;

bool check_Full() {

	if(current == size - 1) {
		return true;
	}
	else {
		return false;
	}
}

void ENQUEUE() {
	int Input;
	if( check_Full() ) {

		cout << "Queue overflow!!! Since Queue is full" << endl;
	}
	else {

		if (front == - 1) {
			front = 0;
		}

		cout<<" Input number in enqueue --> ";
		cin >> Input;
		current++;
		Queue[current] = Input;

	}
}
bool Check_Empty() {

	if( front == - 1 || front > current ) {
		return true;
	}
	
	else {
		return false;
	}
	
}
void DEQUEUE() {
	if( Check_Empty() ) {
	
		cout << "Queue overflow!!! Since Queue is full";
	
	}
	
	else {

		cout << "Deleted Element is --> "<< Queue[front] << endl;
		++front;
	}
}
void Display_Queue() {
	
	if (front == - 1)
		cout<<" EMPTY QUEUE !!! "<<endl;

	else
		for (int i = front ; i <= current ; ++i) {
			int q = 0;
			cout << "Queue[" << q << "] --> " << Queue[i] << endl;
			q++;
		}

}

int main() {

	int choice;
    cout << "1 --> ENQUEUE \n2 --> DEQUEUE \n3 --> Display QUEUE\n\n\tOr any other input for EXIT!" << endl;

    while(1) {

        cout << "Input your choice --> ";
        cin >> choice;
        switch(choice) {
        	case 1:

                ENQUEUE();
                break;

			case 2:

                DEQUEUE();
                break;

            case 3:

            	Display_Queue();
                break;

            default:

				return 0;

		}
    }
	return 0;
}
