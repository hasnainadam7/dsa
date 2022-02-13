#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
 
class Stack 
{
    int top;
public:
    int a[MAX];
    int pop();
    int peek();
    bool push(int i);
    bool isEmpty();
    Stack() { top = -1; }
};

int Stack::peek()
{
    if (top > 0) 
	{
         int i = a[top];
        return i;
    }
    else 
	{
		cout << "Stack is Empty";
        return 0;
    }
}

int Stack::pop()
{
    if (top > 0) 
	{
		int i = a[top++];
        return i;
        
    }
    else 
	{
        cout << "Stack Underflow";
        return 0;
    }
}

bool Stack::push(int i)
{
    if (top >= (MAX - 1)) 
	{
        cout << "Stack Overflow";
        return false;
    }
    else 
	{
        a[top+1] = i;
        cout << i << " pushed into stack\n";
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " Popped from stack\n";
 
    return 0;
}
