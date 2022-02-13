#include <iostream>
using namespace std;

class Node{
	public :
		int data;
		int top;
		Node *next;
		//Node *prev;
};


void push(Node **head,int data){

	Node* newNode=new Node();
	newNode->data=data;
	newNode->next=(*head);
	(*head)=newNode;
//	return 1;
}
void pop(Node** head){


	if((*head)==NULL){
	cout<<"underFlow";
	}
	else{
	cout<<"POP: ";
	cout<<(*head)->data;
	(*head)=(*head)->next;
	}
}
int main(){
	int value;
	Node *head=NULL;
	int size;
	cout<<"Enter Size :";
	cin>>size;
	for(int i=1;i<=size;i++){
		cout<<"PUSH["<<i<<"] :";		
		cin>>value;
	 
	 	push(&head,value);	
	}
	char check='y';
	int delte;
	while(true){
		pop(&head);
		
		if(delte==-1){
			cout<<"\nAll Elements of stack are Popped ";
			break;
		}
		cout<<"\nFor pop more elements type y & for Exit type Any :";
		cin>>check;
		if(check!='y'){
		break;}
	}
	
	
	//push(&head,data);
}
