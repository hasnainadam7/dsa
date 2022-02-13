#include <iostream> 
using namespace std;  
// class Node
class Node  
{  
    public: 
    int ivalue;  
    Node* upcoming;  
};  
  
//Add Function
void add(int new_ikey,Node** head)  
{  
   Node* new_node = new Node(); 
   new_node->ivalue = new_ikey;  
   new_node->upcoming = (*head);  
   (*head) = new_node;  
}  


//Search Function
bool search( int i,Node* head)  
{  
   Node* current = head; 
   while (current != NULL)  
   {  
       if (current->ivalue == i)  
           return true;  
       current = current->upcoming;  
   }  
   return false;  
}  

//Delete Function
void dnode(Node** head, int ikey) 
{ 
   Node* temporary = *head; 
   Node* last= NULL; 

   if (temporary != NULL && temporary->ivalue == ikey) 
   { 
       *head = temporary->upcoming; 
       delete temporary;            
       return; 
   } 

   while (temporary != NULL && temporary->ivalue != ikey) 
   { 
       last= temporary; 
       temporary = temporary->upcoming; 
   }  
   if (temporary == NULL) 
       return; 
    
	last->upcoming = temporary->upcoming;  
    delete temporary; 
} 
//Display Function 
void Display(struct Node *head) 
{
	Node *list = head;
	while(list)
	{
		cout << list->ivalue << " ";
		list = list->upcoming;
	}
	cout << endl;
}

//Main Function  
int main()  
{  
   Node* head = NULL; 
	int ivalue;
	int divalue;
	int SElement;
  	
	for(int i=0; i<=5; i++)
	{
	 	cout << "Element to be Added" << i <<" :";
	    cin >> ivalue;
	    add(ivalue,&head);
	}
    Display(head);
    
    cout << "Element to be Searched: " ;
    cin >> SElement;
    
    if(search(SElement,head)== true)
	{
		cout << "\n Element Founded" << endl;
    }
    else
    {
    	cout << " \n Not able to Find the Element " << endl;
	}

	cout << "Element to be Deleted: " ; 
    cin >> divalue;
    
	dnode(&head, divalue);
	Display(head);
	
  return 0;  
}  
