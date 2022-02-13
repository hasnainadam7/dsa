#include <iostream>
using namespace std;
struct connection
 {
    int ivalue;
    struct connection* upcoming;
    connection(int ivalue)
    {
        this->ivalue = ivalue;
        upcoming = NULL;
    }
};
 
 
struct linked_list
{
   connection* head;
   linked_list()
{
  head = NULL;
}
 
    void reverse()
    {
        connection* current = head;
        connection *previous = NULL, *upcoming = NULL;
 
        while (current != NULL)
		 {
            upcoming = current->upcoming;
            current->upcoming = previous;
            previous = current;
            current = upcoming;
        }
        head = previous;
    }
 
    void input(int ivalue)
    {
        connection* temporary = new connection(ivalue);
        temporary->upcoming = head;
        head = temporary;
    }
    void output()
    {
        struct connection* temporary = head;
        while (temporary != NULL)
		 {
            cout << temporary->ivalue << ", ";
            temporary = temporary->upcoming;
        }
    }
};
 
 
int main()
{
	linked_list L ;
    linked_list L1 ;
    L.input(10);
    L.input(9);
    L.input(8);
    L.input(7);
	L.input(6);
    L.input(5);
    L.input(4);
    L.input(3);
    L.input(2);
    L.input(1);
    L.input(0);
    
	cout << " \n\t----------------------------------------------------------------------------------------------";
    cout << " \n\tGiven Linked List: ";
    L.output();
    
    cout << " \n\t----------------------------------------------------------------------------------------------";
    cout << "\n\tReversed Linked List: ";
    L.reverse();
    L.output();
   
	L1.input('k');
	L1.input('j');
	L1.input('i');
	L1.input('h');
	L1.input('g');
	L1.input('f');
	L1.input('e');
	L1.input('d');
	L1.input('c');
	L1.input('b');
    L1.input('a');

	cout << " \n\t----------------------------------------------------------------------------------------------";
    cout << " \n\tGiven ASCII(small Alphabet) Linked List ";
    L1.output();
    
    cout << " \n\t----------------------------------------------------------------------------------------------";
    cout << "\n\tReversed ASCII(small Alphabet) Linked list ";
    L1.reverse();
    L1.output();
    
    cout << " \n\t----------------------------------------------------------------------------------------------";
    
	return 0;
}
