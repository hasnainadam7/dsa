// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdlib.h>
using namespace std;




//Let the linked list class be as given below.

class Linkedlist

{

    public:

    int key;

    Linkedlist* next;


};
int main(){
    int i;
    cout << "select option" << endl;
    cout << "1. search the node" << endl;
    cout << "2. delete the node" << endl;
    cout << "3. reverse form" << endl;
    cout << ">>>>any other key to exit<<<<"<< endl;
    cin>> i;
    if(i=1) bool search(Linkedlist* head, int data);

    else if(i=3) void reverse();

}

//1. Member function of the linked list class to search the node with the given data :

bool search(Linkedlist* head, int data)

{

    Linkedlist* current = head; // Initialize current

    while (current != NULL)

    {

        if (current->key == data)

{

            cout<<"Search successful. Node is present in the linked list.";

break;

}

        current = current->next;

    }

    return false;

}

//2. Member function of the linked list class to delete the node with the given data :



//3. Function which returns the reversed form of the given linked list :

void reverse(Linkedlist *head)
{
        // Initialize current, previous and

        // next pointers

        Linkedlist* current = head;

        Linkedlist *prev = NULL, *next = NULL;

        while (current != NULL) {

            // Store next

            next = current->next;

            // Reverse current node's pointer

            current->next = prev;

            // Move pointers one position ahead.

            prev = current;

            current = next;

        }

        head = prev;
}
