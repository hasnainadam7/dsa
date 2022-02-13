#include<iostream>
using namespace std;

int array[5], n = 5, start = - 1, end = - 1;
void Insert()
{
    int i;
    for(i=0; i<6; i++){
   int value;
   if (end == n - 1)
   cout<<"Overflow"<<endl ;
   else
    {
      if (start == - 1)
      start = 0;
      cout<<"   Insert the element in array : ";
      cin>>value;
      end++;
      array[end] = value;
   }
}

}
void Delete()
{
    int pos;
    cout<< "Enter pos element want to delete 0-4 : ";
    cin>> pos;
   if (start == - 1 || start > end)
   {
      cout<<"\n array Underflow ";
      return ;
   }
   else
   {
      cout<<"\n Element deleted from array is : "<< array[pos];
      start++;;
   }
}
void Display()
{
   if (start == - 1)
   cout<<"array is empty"<<endl;
   else {
      cout<<"array elements are : ";
      for (int i = start; i <= end; i++)
      cout<<array[i]<<" ";
         cout<<endl;
   }
}
int main()
{
   int ch;
   cout<<"\n 1) Insert element to array";
   cout<<"\n 2) Delete element from array";
   cout<<"\n 3) Display all the elements of array";
   cout<<"\n 4) Exit"<<endl;
   do
    {
      cout<<"\n Enter your choice : ";
      cin>>ch;
      switch (ch)
      {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<" Exit"<<endl;
         break;
         default: cout<<" Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
