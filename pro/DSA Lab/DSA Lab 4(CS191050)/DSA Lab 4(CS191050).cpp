#include<iostream>
using namespace std;
void sortedmergelist(int x[], int y[], int res[], int n, int m)
{
	int a = 0, b = 0, c = 0;
	while (a < n) 
	{
		res[c] = x[a];
		a += 1;
		c += 1;
	}
	
	while (b < m)
	{
		res[c] = y[b];
		b += 1;
		c += 1;
	}
}

int main()
{
    int x[] = { 10, 5, 15 };
    int y[] = { 20, 3, 2, 12 };
    int n = sizeof(x) / sizeof(x[0]);
    int m = sizeof(y) / sizeof(y[0]);
    int res[n + m];
    sortedmergelist(x, y, res, n, m);
    cout << "Sorted merged list :";

    for (int a = 0; a < n + m; a++)
    {
        cout << " " << res[a];
        cout << "\n";
	}
    
    return 0;
}
