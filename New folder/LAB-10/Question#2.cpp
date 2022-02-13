#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* insertNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
void display_INDOOR(Node* node)
{
    if (!node)
        return;
    display_INDOOR(node->left);
    cout << node->data << endl;
    display_INDOOR(node->right);
}
Node* Sum(Node* t1, Node* t2)
{
    if (!t1)
        return t2;
    if (!t2)
        return t1;
    t1->data = t1->data + t2->data;
    t1->left = Sum(t1->left, t2->left);
    t1->right = Sum(t1->right, t2->right);
    return t1;
}
int main()
{
    Node* root1 = insertNode(1);
    root1->left = insertNode(16);
    root1->right = insertNode(2);
    root1->left->left = insertNode(14);
    root1->right->left = insertNode(15);
    root1->right->right = insertNode(8);
   
    
    Node* root2 = insertNode(25);
    root2->left = insertNode(30);
    root2->right = insertNode(40);
    root2->left->left = insertNode(60);
    root2->right->left = insertNode(55);
    root2->right->right = insertNode(35);

    Node* root3 = Sum(root1, root2);
    cout << "The Sum of both tress is:\n";
    display_INDOOR(root3);
    cout << endl;
    return 0;
}
