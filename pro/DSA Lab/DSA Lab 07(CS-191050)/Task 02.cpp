#include <bits/stdc++.h>
using namespace std;
 
class StackNode 
{
public:
    int memory;
    StackNode* next;
};
 
StackNode* newNode(int memory)
{
    StackNode* stackNode = new StackNode();
    stackNode->memory = memory;
    stackNode->next = NULL;
    return stackNode;
}
 
int isEmpty(StackNode* root)
{
    return !root;
}

int peek(StackNode* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->memory;
}

int pop(StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->memory;
    free(temp);
 
    return popped;
}

void push(StackNode** root, int memory)
{
    StackNode* stackNode = newNode(memory);
    stackNode->next = *root;
    *root = stackNode;
    cout << memory << " pushed to stack\n";
}
 
int main()
{
    StackNode* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    cout << pop(&root) << " popped from stack\n";
 
    cout << "Top element is " << peek(root) << endl;
 
    return 0;
}
