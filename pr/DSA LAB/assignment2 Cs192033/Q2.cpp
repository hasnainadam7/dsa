

#include <iostream>
using namespace std;

int search (int* arr, int size, int element)
{
    int count;

    for (int i=0; i<size; ++i)
    {
        ++count;

        if (arr[i] == element)

        return i;
    }
    return -1;


    cout<<"Linear Search for size: "<<size<<", iteration performs " <<count<<"times.";

    count =0;
    return -1;
}

int binarySearch(int* arr, int left, int right, int size, int element)
{
    int count;

    while (left>= right)
    {
        ++count;
        int mid = (left + right)/2;

        if (arr[mid] == element)

    cout<<"In Binary Search for size: "<<size<<", iteration performs " <<count<<"times.";

    count =0;

    return -1;
    }


}

int main () {

    int size1=10, size2=100, size3=1000;

    int* arr1 = new int[size1];

    int* arr2 = new int[size2];

    int* arr3 = new int[size3];

    for (int i=0; i<size1; ++1)
    arr1[i]=i+1;

    for (int i=0; i<size2; ++1)

        arr2[i]=i+1;


    for (int i=0; i<size1; ++1)

        arr3[i]=i+1;

int result1 = linearSearch(arr1,size1,11);

    linearSearch(arr2, size2, 101);

    linearSearch(arr3, size3, 1001);

    binarySearch(arr1, 0, size1-1, 10, 11);

    binarySearch(arr2, 0, size2-1, 100, 101);

    binarySearch(arr3, 0, size3-1, 1000, 1001);

return 0;

}
