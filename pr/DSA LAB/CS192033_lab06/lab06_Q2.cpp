#include <iostream>
using namespace std;
struct Node {
int data;
struct Node* next;
};

void push(struct Node** head_ref, int new_data);


bool isPresent(struct Node* head, int data);

struct Node* getmerge(
struct Node* head1,
struct Node* head2)
{
struct Node* result = NULL;
struct Node *t1 = head1, *t2 = head2;


while (t1 != NULL) {
push(&result, t1->data);
t1 = t1->next;
}

while (t2 != NULL) {
if (!isPresent(result, t2->data))
push(&result, t2->data);
t2 = t2->next;
}
return result;
}
struct Node* getcommon(struct Node* head1,
struct Node* head2)
{
struct Node* result = NULL;
struct Node* t1 = head1;

while (t1 != NULL) {
if (isPresent(head2, t1->data))
push(&result, t1->data);
t1 = t1->next;
}
return result;
}


void push(struct Node** head_ref, int new_data)
{


struct Node* new_node
= (struct Node*)malloc(
sizeof(struct Node));

new_node->data = new_data;

new_node->next = (*head_ref);

(*head_ref) = new_node;
}


void printList(struct Node* node)
{
while (node != NULL) {
cout << " " << node->data;
node = node->next;
}
}
bool isPresent(struct Node* head, int data)
{
struct Node* t = head;
while (t != NULL) {
if (t->data == data)
return 1;
t = t->next;
}
return 0;
}

int main()
{

struct Node* head1 = NULL;
struct Node* head2 = NULL;
struct Node* common_nodes = NULL;
struct Node* merge = NULL;

push(&head1, 41);
push(&head1, 3);
push(&head1, 17);
push(&head1, 19);
push(&head1, 9);
push(&head1, 56);
push(&head2, 19);
push(&head2, 2);
push(&head2, 3);
push(&head2, 8);
push(&head2, 56);
push(&head2, 9);
common_nodes = getcommon(head1, head2);
merge = getmerge(head1, head2);
cout << "\n First list is:- ";
printList(head1);
cout << "\n Second list is:- ";
printList(head2);
cout << "\n Common nodes of both lists:- ";
printList(common_nodes);
cout << "\n Merged list og list1 and list2:-";
printList(merge);
cout<<endl;
return 0;
}
