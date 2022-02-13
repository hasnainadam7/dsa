#include <iostream>
using namespace std;
int array[8], n =8, start = - 1, end = - 1;
int i;
void Insert()
{
    for(i=0; i<9; i++){
   int value;
   if (end == n - 1)
   cout<<"Overflow"<<endl ;
   else
    {
      if (start == - 1)
      start = 0;
      cout<<" Please Insert the element in array : ";
      cin>>value;
      end++;
      array[end] = value;
   }
}
if (start == - 1)
   cout<<"Array is empty";
   else {
      cout<<"  Elements are : ";
      for (int i = start; i <= end; i++)
      cout<<array[i]<<" ";
         cout<<endl;
   }
}


int main()
{
 Insert();

return 0;
}
