#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left = NULL;
    struct Node* right = NULL;
    
    Node(int a)
    {
        data = a;
    }
};
int heightTREE(Node* root)
{
    if (root == NULL)
        return 0;
        
    return 1+max(heightTREE(root->left), heightTREE(root->right));
}

void displayIN_order(struct Node* node)
{
    if (node == NULL)
        return;
    displayIN_order(node->left);
    cout << node->data << " , ";
    displayIN_order(node->right);
}
void dispalyPOST_order(struct Node* node)
{
    if (node == NULL)
        return;
    dispalyPOST_order(node->left);
    dispalyPOST_order(node->right);
    cout << node->data << " , ";
}
void displayPRE_order(struct Node* node)
{

    if (node == NULL)
        return;
    cout << node->data << " , ";
    displayPRE_order(node->left);
    displayPRE_order(node->right);
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(16);
    root->left->left = new Node(2);
    root->left->left->right = new Node(14);
    root->left->left->right->right = new Node(15);
    root->left->left->right->left = new Node(8);
    root->left->left->left = new Node(2);
    
    root->right = new Node(25);
    root->right->right = new Node(30);
    root->right->right->left = new Node(40);
    root->right->right->right = new Node(60);
    root->right->right->right->right = new Node(100);
    root->right->right->right->left = new Node(35);
    root->right->right->right->left->right = new Node(55);
    cout << "\nHeight of BST iS: " << heightTREE(root) <<endl;
    cout << endl;

    cout << "PostOrder:  ";
    dispalyPOST_order(root->right);
    cout << "InOrder:    ";
    displayIN_order(root->right);
	cout << endl;
    
	cout << "Preorder:   ";
    displayPRE_order(root->right);
    cout << endl;
    


    return 0;
}
