#include<iostream>
using namespace std;

int main()
{
 int num, count, sum = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &num);
 for(count = 1; count <= num; count++)
 {
 sum =sum+count;
 }
 printf("Sum = %d", sum);
 return 0;
}
