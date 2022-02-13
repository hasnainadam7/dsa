#include<bits/stdc++.h> 
#include <iostream>
using namespace std; 

struct node 
{ 
	int data; 
	struct node* next; 
}; 

void PUSH(struct node** head_ref, int new_data) 
{ 
	struct node* new_node = new node; 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 

void prList(struct node *ptr) 
{ 
	while (ptr != NULL) 
	{ 
		
		cout<<ptr->data; 
		ptr = ptr->next; 
	} 
	    cout<<" ";
		cout<<endl; 
} 

void prMiddle(struct node* head) 
{ 
	int count = 0; 
	struct node* mid = head; 

	while (head != NULL) 
	{  
		if (count & 1) 
			mid = mid->next; 

		++count; 
		head = head->next; 
	}  
	if (mid != NULL) 
		cout<<"Middle Element: "<< mid->data << "\n\n";
} 

int main() 
{ 
	struct node* head = NULL; 
	int i;
	for(i = 8; i>1; i--)
	{
		PUSH(&head,i);
		prList(head);
		prMiddle(head);
	}
}
