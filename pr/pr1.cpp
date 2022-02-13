#include<iostream>
using namespace std;
/*
int main(void)
{ 
int h, i, j, a[1024][1024] ; 
for (h = 0; h < 10; h++) 
for (i = 0; i< 1024; i++) for (j = 0; j < 1024; j++) 
a[j][i]=0;
return 0;
} 

int main(void)
{ 
int h, i, j,a[1024][1024]; 
for (h = 0; h < 10; h++) 
for (i = 0; i< 1024; i++) 
for (j = 0; j < 1024; j++) 
a[i][j] = 0 ;
return 0;
}

int main(void)
{
int i,j;
int a[1024][100]; 
int b[1024][100];
for (i = 0; i< 1024; i++) 
for (j = 0; j < 1024; j++) a[i][j] =  a[i][j] + b[j][i];
}

*/
int main(void)
{
int i,j;
int x, y, c[1024][100]; int b[1024][100];
for (i = 0; i< 1024; i += 2) 
for (j = 0; j < 1024; j += 2) 
for (x =i; x <i + 2; x++) 
for (y = j; y <j + 2; y++) c[x][y] = c[x][y]+ b[x][y];
}
