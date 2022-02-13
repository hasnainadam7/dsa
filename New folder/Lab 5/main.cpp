#include<iostream>
#include"Linklist.h"

using namespace std;

int main() {
    LinkList L;
    for (int i = 0 ; i < 10 ; i++) {
    	L.Add_node(i);
	}
    L.Print();
    cout << "After Traversal : " <<endl;
    L.Reverse_traversal();
    int choice;
	cout << "1 --> SEARCH\n2 -->  DELETE" << endl;
	cout << "Enter your choice --> " << endl;
	cin >> choice;
	switch(choice) {
		case 1:
			int value;
			cout << "Which number you want to search? --> ";
			cin >> value;
			L.Search_node(value);
			break;
		case 2:
			int pos;
			cout << "Which number you want to delete? --> ";
			cin >> pos;
			L.Delete_node(pos);
			break;
		default:
			return 0;
	}
}
