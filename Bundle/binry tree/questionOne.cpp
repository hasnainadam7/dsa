#include <iostream> 
using namespace std; 

class Node 
{ 
public: 

    char chr; 
    Node *left = NULL, *right = NULL; 
    Node(char a) 
    { 
        chr = a; 
    } 
}; 
  
 
int x(char c) 
{ 
    int num = 0; 
        
      if(c!='-')
            num = num*10 + (int(c)-48); 
      else
        {
            num = num*10 + (int(c)-48); 
            num = num*-1;
        }
    return num; 
} 
  

int evaluation(Node* n) 
{ 
    
    if (!n) 
        return 0; 
    if (!n->left && !n->right) 
        return x(n->chr); 
      int rightChar = evaluation(n->right); 
    int leftChar = evaluation(n->left); 
    if (n->chr=='-') 
        return leftChar-rightChar; 
   if (n->chr=='+') 
        return leftChar+rightChar; 
    if (n->chr=='/') 
        return leftChar/rightChar; 
      if (n->chr=='*') 
        return leftChar*rightChar; 
    return leftChar/rightChar; 
} 
  

int main() 
{ 
     //level 1
    Node *n = new Node('+') ;
    //level 2
    n->left = new Node('/'); 
    n->right = new Node('*'); 
    //level 3
    	//level 3 left
		n->left->left = new Node('*'); 
    	n->left->right = new Node('-');
	
		//level 3 right
		n->right->left = new Node('5');  
		n->right->right = new Node('-'); 
	//level 4
		//level 4 left left 
    	n->left->left->left = new Node('2'); 
   	 	n->left->left->right = new Node('3');
    
 		//level 4 left right 
    	n->left->right->left = new Node('2');
    	n->left->right->right = new Node('1');
    	
    	//level 4 right left 
    	//acooirding to condition this colum will be null
    	//no childrens
    	//n->right->left->left = new Node(NULL); 
    	//n->right->left->right = new Node(NULL); 
    	
		//level 4 right right 
    	n->right->right->left = new Node('4'); 
    	n->right->right->right = new Node('1'); 
    	
    cout <<"Resultant value after evaluation: "<< evaluation(n) << endl; 
  
    return 0; 
} 
