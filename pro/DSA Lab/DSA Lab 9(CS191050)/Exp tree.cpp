#include<iostream>
#include<stdlib.h>
#include<stack>
#include<string.h>
using namespace std;
struct ExpTree
{
    char data;
    ExpTree * left; 
	ExpTree * right;
};
 

int checkOperator(char c)
{
    if (c == '-' ||c == '+' ||  c == '*' || c == '/' ||c == '^')
    {
     	return 1;
	}   
	else
    return 0;
}

void Inorder(ExpTree *t)
{
    if(t)
    {
        Inorder(t->left);
        cout<< t->data;
        Inorder(t->right);
    }
}


ExpTree* newNode(char c)
{
   ExpTree *t = new ExpTree;
    t->left = t->right = NULL;
    t->data = c;
    return t;
};

ExpTree * constructExpTree(string postExp)
{
    stack<ExpTree *> s;
    ExpTree *t, *t1, *t2;
 

    for (int i=0; i<postExp.size(); i++)
    {
        
        if (checkOperator(postExp[i]))
        {
        	
            t = newNode(postExp[i]);
 
            
            t1 = s.top(); 
            s.pop();     
            t2 = s.top();
            s.pop();
 
  
            t->right = t1;
            t->left = t2;
 
            s.push(t);
        	
        	
        }
        else 
        {
           t= newNode(postExp[i]);
            s.push(t);
        }
    }
 
    t = s.top();
    s.pop();
 
    return t;
}

int main()
{

    string postExp = "AB+CD-*";
    
	cout<<"Infix Expression is :";
    
    ExpTree * treeroot = constructExpTree(postExp);
    
	Inorder(treeroot);
    
	
	
	 
    return 0;
}
