#include<iostream>
using namespace std;

int stack[50] ,top = -1;

void push(int n);
void pop();
void peek();

int main() {
	
	int n;
    cout << "Input size of stack --> ";
    cin >> n;
    
    int choice;
    while (1) {
    	cout << "1 --> PUSH \n2 --> POP\n3 --> PEEK\n\n\t*****OR any number to EXIT!*****" << endl;
		cout << "Enter choice --> ";
		cin >> choice;
        switch (choice) {
        	
            case 1:

                push(n);
                break;

    		case 2:

                pop();
                break;

            case 3:

            	peek();
                break;

            default:
            	
            	return 0;
                
        }
    }
    return 0;
}
void push(int n) {
	
	int input;
	
    if (top >= n - 1)
        cout << "ERROR --> STACK OVERFLOW" << endl;
        
    else {
	
    	top++;
    	
        cout << "Input number to be pushed in stack --> ";
        cin >> input;
        
        stack[top] = input;
        cout << endl << "\t\t\t" << input << " is the Pushed Value!" << endl << endl;

    }
    
}

void pop() {
	if (top < 0)
        cout << endl << "ERROR --> STACK UNDERFLOW" << endl << endl;

    else {

		cout << endl << "\t\t\tPopped Value is --> " << stack[top] << endl << endl;
        --top;

    }
}
void peek(){

	if (top < 0)
        cout << endl << "ERROR --> STACK UNDERFLOW" << endl << endl;

    else {

		cout << endl << "\t\t\tPeeked Value is --> " << stack[top] << endl << endl;
        --top;

    }
	
}
