#include <iostream>
using namespace std;

struct QNode {
    int data;
    QNode* next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Queue {
    QNode *front;
	QNode  *rear;
    Queue()
    {
        front = rear = NULL;
    }
    bool isFull(){
    	
    	if(rear==NULL){
    		return true;
		}
    	return false;
	}

    int enQueue(int x)
    {

        QNode* newNode = new QNode(x);

  
        if (isFull()==true) {
 
            front = rear = newNode;
            return 0;
    		}       
        rear->next = newNode;
        rear = newNode;
        
          return 0;
    }
	bool isEmpty()
	{
		if(front==NULL){
		return true;
		}
		return false;
	}
    int deQueue()
    {
      
        if (isEmpty()==true)
            {
            	cout<<"UndeFlow";
            	return 0 ;
			}
		else{
		   
        QNode* newNode = front;
        front = front->next;

  
        if (front == NULL)
        	  rear = NULL;
		
        delete (newNode);
        return 0;
    }
    
	}
	void Display(){
	cout<<"First : "<<front->data<<"\n";
	while(front!=rear){
	cout<<front->data<<" ";
	front=front->next;
	}
	}
};

int main()
{

    Queue q;
    q.enQueue(5);
    q.enQueue(2);
    q.enQueue(3);

  
    q.deQueue();
    q.deQueue();
    q.enQueue(6);
    q.enQueue(3);
    q.Display();
    
}
