#include <bits/stdc++.h> 
using namespace std; 

class Node 
{ 
public: 

    char data; 
    Node *left = NULL, *right = NULL; 
    Node(char chr) 
    { 
        data = chr; 
    } 
}; 
  
 
int x(char s) 
{ 
    int num = 0; 
        
      if(s!='-')
            num = num*10 + (int(s)-48); 
      else
        {
            num = num*10 + (int(s)-48); 
            num = num*-1;
        }
    return num; 
} 
  

int eval(Node* root) 
{ 
    
    if (!root) 
        return 0; 
  
    if (!root->left && !root->right) 
        return x(root->data); 
  
    int l_val = eval(root->left); 
  
    int r_val = eval(root->right); 
  
    
    if (root->data=='+') 
        return l_val+r_val; 
  
    if (root->data=='-') 
        return l_val-r_val; 
  
    if (root->data=='*') 
        return l_val*r_val; 
    if (root->data=='/') 
        return l_val/r_val; 
  
    return l_val/r_val; 
} 
  

int main() 
{ 
     //level 1
    Node *root = new Node('+') ;
    //level 2
    root->left = new Node('/'); 
    root->right = new Node('*'); 
    //level 3
    	//level 3 left
		root->left->left = new Node('*'); 
    	root->left->right = new Node('-');
	
		//level 3 right
		root->right->left = new Node('5');  
		root->right->right = new Node('-'); 
	//level 4
		//level 4 left left 
    	root->left->left->left = new Node('2'); 
   	 	root->left->left->right = new Node('3');
    
 		//level 4 left right 
    	root->left->right->left = new Node('2');
    	root->left->right->right = new Node('1');
    	
    	//level 4 right left 
    	//acooirding to condition this colum will be null
    	
		//level 4 right right 
    	root->right->right->left = new Node('4'); 
    	root->right->right->right = new Node('1'); 
    cout <<"Expected Output: "<< eval(root) << endl; 
  
    return 0; 
} 
