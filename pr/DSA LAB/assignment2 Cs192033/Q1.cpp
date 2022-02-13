#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 9, 3, 8, 2, 6, 4, 7, 5 };
    int n = sizeof(arr);
    int element;
    cout<<"Enter Number:"<<endl;
    cin>> element;


    int i = 0;
    while (i < n)
    {
        if (arr[i] == element) {
            break;
        }
        i++;
    }

    if (i < n) {
        cout << "Element " << element << " is present at index " << i
             << " in the given array";
    }
    else {
        cout << "Element is not present in the given array";
    }

    return 0;
}

