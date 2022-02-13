#include<iostream>
using namespace std;

struct node
{
    int informatin;
    struct node *upcoming;
    struct node *last;
}*start;

class double_llist
{
    public:
    	void add_begin(int inum);
        void create_list(int inum);
        void display_dlist();
        void add_after(int inum, int position);
};
 
void double_llist::add_begin(int inum)
{
    if (start == NULL)
    {
        cout << "\n\tCreate a list." << endl;
        return;
    }
    
    struct node *temp;
    temp = new(struct node);
    temp->last = NULL;
    temp->informatin = inum;
    temp->upcoming = start;
    start->last = temp;
    start = temp;
    cout << "\n\tElement Inserted: " << endl;
}

void double_llist::create_list(int inum)
{
    struct node *s, *temp;
    temp = new(struct node); 
    temp->informatin = inum;
    temp->upcoming = NULL;
    
    if ( start == NULL)
    {
        temp->last = NULL;
        start = temp;
    }
    
    else
    {
        s = start;
        while (s->upcoming != NULL)
            s = s->upcoming;
        s->upcoming = temp;
        temp->last = s;
    }
}

void double_llist::display_dlist()
{
    struct node *s;
    
    if (start == NULL)
    {
        cout << "\n\tThe List is Empty, There Is Nothing to show." << endl;
        return;
    }
    
    s = start;
    cout << "\n\tThe Doubly Link List is :" << endl;
    
    while (s != NULL)
    {
    	cout << "\t";
        cout << s-> informatin << "--> " ;
        s = s->upcoming;
    }
    
    cout<<"NULL"<<endl;
}

void double_llist::add_after(int inum, int pos)
{
    if (start == NULL)
    {
        cout << "First Create the list." << endl;
        return;
    }
    
    struct node *tmp, *s;
    int i;
    s = start;
    
    for (i=0; i<pos-1; i+1)
    {
        s = s->upcoming;
        
        if (s == NULL)
        {
            cout << "\n\tThere are less than " << pos << " elements." << endl;
            return;
        }
    }
    
    tmp = new(struct node);
    tmp->informatin = inum;
    
    if (s->upcoming == NULL)
    {
        s->upcoming = tmp;
        tmp->upcoming = NULL;
        tmp->last = s;      
    }
    
    else
    {
        tmp->upcoming = s->upcoming;
        tmp->upcoming->last = tmp;
        s->upcoming = tmp;
        tmp->last = s;
    }
    
    cout << "\n\tThe Element is Inserted at The Specific Position" << endl;
}

int main()
{
    int choice, position;
    double_llist dl;
    dl.create_list(1);
    dl.create_list(2);
    dl.create_list(3);
    dl.create_list(4);
    dl.create_list(5);
    dl.create_list(6);
    dl.display_dlist();
    cout<<endl;
    
    dl.add_begin(0);
    cout<<endl;
    
    dl.display_dlist();
    cout<<endl;
    
    dl.add_after(7, 7);
    cout<<endl;
    
    cout << "\n\tForward Traversal"<< endl;
    dl.display_dlist();
    
    return 0;
}

