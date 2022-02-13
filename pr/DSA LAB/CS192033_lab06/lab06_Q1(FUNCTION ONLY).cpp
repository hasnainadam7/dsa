void insert(int value)
{
if (start == NULL)
{
cout<<"First Create the list."<<endl;
return;
}
struct node *temp;
temp = new(struct node);
temp->prev = NULL;
temp->info = value;
temp->next = start;
start->prev = temp;
start = temp;
cout<<"Element Inserted"<<endl;
}

void insert_at(int value, int pos)
{
if (start == NULL)
{
cout<<"First Create the list."<<endl;
return;
}
struct node *tmp, *q;
int i;
q = start;
for (i = 0;i < pos - 1;i++)
{
q = q->next;
if (q == NULL)
{
cout<<"There are less than ";
cout<<pos<<" elements."<<endl;
return;
}
}
tmp = new(struct node);
tmp->info = value;
if (q->next == NULL)
{
q->next = tmp;
tmp->next = NULL;
tmp->prev = q;
}
else
{
tmp->next = q->next;
tmp->next->prev = tmp;
q->next = tmp;
tmp->prev = q;
}
cout<<"Element Inserted"<<endl;
}

void printList(Node* node)
{

Node* last;

cout<<"\nTraversal in forward direction \n";

while (node != NULL)

{

cout<<" "<<node->data<<" ";

last = node;

node = node->next;

}
