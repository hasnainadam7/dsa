//Let the linked list class be as given below.

class Linkedlist

{

    public:

    int key;

    Linkedlist* next;

};

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

2. Member function of the linked list class to delete the node with the given data :

void deleteNode(Linkedlist*head, Linkedlist*n) //n is the node with the given data

{

    // When node to be deleted is head node

    if(head == n)

    {

        if(head->next == NULL)

        {

            cout << "There is only one node." <<

                    " The list can't be made empty ";

            return;

        }



        /* Copy the data of next node to head */

        head->key = head->next->key;



        // store address of next node

        n = head->next;



        // Remove the link of next node

        head->next = head->next->next;



        // free memory

        free(n);



        return;

    }





    // When not first node, follow

    // the normal deletion process



    // find the previous node

    Node *prev = head;

    while(prev->next != NULL && prev->next != n)

        prev = prev->next;



    // Check if node really exists in Linked List

    if(prev->next == NULL)

    {

        cout << "\nGiven node is not present in Linked List";

        return;

    }



    // Remove node from Linked List

    prev->next = prev->next->next;



    // Free memory

    free(n);



    return;

}

3. Function which returns the reversed form of the given linked list :

void reverse()

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
