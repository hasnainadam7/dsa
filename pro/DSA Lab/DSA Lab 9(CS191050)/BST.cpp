#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct Tree
{
    int  data;
    Tree * left; 
	Tree * right;
};
 
void inorder(Tree *tree)
{
    if(tree)
    {
        inorder(tree->left);
        cout<<" "<< tree->data;
        inorder(tree->right);
    }
}
void postorder(Tree *tree)
{
    if(tree)
    {
        inorder(tree->left);
        inorder(tree->right);
        cout<<", "<<tree->data;
    }
}



void preorder(Tree *tree)
{
    if(tree)
    {
    	cout<<", "<< tree->data;
        inorder(tree->left);
        inorder(tree->right);
        
    }
}


Tree* newNode(int data)
{
    Tree *tree = new Tree;
    tree->left = tree->right = NULL;
    tree->data = data;
    return tree;
};

Tree *  RightSubTree( Tree* treeroot)
{
	treeroot=treeroot->right;
	return treeroot;
}

Tree * BST(Tree * treeroot,int x)
{
	

	
	if (treeroot==NULL)
	{
		treeroot= newNode(x);
	}
	else
	{
		if (x<treeroot->data)
		{
			treeroot->left=BST(treeroot->left,x);
		}
		else if(x>treeroot->data)
		{
			treeroot->right=BST(treeroot->right,x);
		}
	}
	
	return treeroot;
}

int main()
{
    
    Tree * treeroot =NULL;
    
    treeroot=BST(treeroot,21);
    BST(treeroot,16);
    BST(treeroot,2);
    BST(treeroot,25);
    BST(treeroot,30);
    BST(treeroot,14);
    BST(treeroot,2);
  	BST(treeroot,60);
    BST(treeroot,8);
    BST(treeroot,15);
    BST(treeroot,35);
    BST(treeroot,40);
    BST(treeroot,100);  
    BST(treeroot,55);
    
    
    cout<<"\nBST :\n";
    
	cout<<"\nInfix :";
    
	inorder(treeroot);
    
    cout<<"\n\nPrefix :";
    preorder(treeroot);
	
	cout<<"\n\nPostfix :";
    
	postorder(treeroot);
    
    cout<<"\n\n\Right Sub Tree of BST:";
	treeroot=RightSubTree(treeroot);
	cout<<"\n\nInfix  of Right Sub Tree :";
    
	inorder(treeroot);
    
	  cout<<"\n\nPrefix of Right Sub Tree: ";
    preorder(treeroot);
	
	cout<<"\n\nPostfix of Right Sub Tree: ";
    
	postorder(treeroot);
  	 
    return 0;
}
