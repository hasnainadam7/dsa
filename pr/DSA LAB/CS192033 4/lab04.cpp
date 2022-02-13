#include <iostream>

using namespace std;

int main()
{
    int arr1[]={2,8,1,7};
    int arr2[]={6,9,0};

    int arrSize1 = sizeof(arr1)/sizeof(arr1[0]);
    int arrSize2=sizeof(arr2)/sizeof(arr2[0]);
    int mergedarray[arrSize1+arrSize2];
    for(int i=0;i<arrSize1;i++) \
    {
        mergedarray[i]=arr1[i];
    }
    for(int i=0;i<arrSize2;i++)
    {
        mergedarray[arrSize1+i]=arr2[i];
    }
    cout<<"Merged array is : "<<endl;
    for(int i=0;i<arrSize1+arrSize2;i++)
    {
        cout<<mergedarray[i]<<" ";
    }

    return 0;
}
