// MUHAMMAD UMAIR
// CS-191050
// 3-B
// QUESTION - 04

#include <iostream>
#include <string>

class BST {
    std::string details;
    BST* left, * right;

public:
    BST();
    BST(std::string);

    BST* Insert(BST*, std::string);

    void Preorder(BST*, int);
};

BST::BST() : details("\0"), left(NULL), right(NULL){}

BST::BST(std::string details) {
    this->details = details;
    left = right = NULL;
}

BST* BST::Insert(BST* root, std::string details) {
    if (!root) {
        BST *a = new BST(details);
        return a;
    }
    if (this->details[0] > root->details[0]) {
        root->right = Insert(root->right, details);
    }
    else if (this->details[0] < root->details[0]) {
        root->left = Insert(root->left, details);
    }
    return root;
}

void BST::Preorder(BST* root, int levelOrder)
{
    if (!root) {
        return;
    }

    std::cout << levelOrder << ". " << root->details << std::endl;

    Preorder(root->left, levelOrder+1);
    Preorder(root->right, levelOrder + 1);
}


int main()
{
    BST a, * root = NULL;
    root = a.Insert(root, "Input Output Devices");
    a.Insert(root, "Bacon");
    a.Insert(root, "Duck");
    a.Insert(root, "Chicken");
    a.Insert(root, "Lamb");
    a.Insert(root, "Nuggest");
    a.Insert(root, "Turkey");
    a.Insert(root, "Steak");
    a.Insert(root, "Roast Beef");
    a.Insert(root, "Pork");
	a.Insert(root, "meat");
    a.Preorder(root, 1);
    return 0;
}
