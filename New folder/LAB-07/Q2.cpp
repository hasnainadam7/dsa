#include <iostream>
using namespace std;

struct node {

   int data;
   struct node *next;

}; node* top = NULL;

void push();
void pop();
void peek();

int main() {
	int choice;
	
	while (1) {
		cout << "1 --> PUSH \n2 --> POP\n3 --> PEEK\n\n\t*****OR any number to EXIT!*****" << endl;
		cout << "Input your choice --> ";
		cin >> choice;
		
		switch(choice) {
		case 1:
			
			push();
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

void push() {
	int V;
	cout << "Input number to be push IN STACK --> ";
	cin >> V;
	
	struct node *newnode = new node();
	
	newnode-> data = V;
	newnode-> next = top;
	top = newnode;
	cout << endl << "\t\t\t" << V << " is the Pushed Value!" << endl << endl;
}

void pop() {
	
	if (top == NULL)
		cout << endl << "ERROR --> STACK UNDERFLOW" << endl << endl;

	else {
		
		cout << endl << "\t\t\tPopped Value is --> " << top-> data << endl << endl;
		top = top-> next;
		
	}
	
}

void peek() {
	
	if (top == NULL)
		cout << endl << "ERROR --> STACK UNDERFLOW" << endl << endl;

	else {
		
		cout << endl << "\t\t\tPeeked Value is --> " << top-> data << endl << endl;
		top = top-> next;
		
	}
	
}
