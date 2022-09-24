#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    int temp;
    if (start >= end)
    {
        return;
    }
    else
        temp = arr[start];   //swap the elements at index start and end;
        arr[start] = arr[end];
        arr[end] = temp;

    reverseArray(arr, start + 1, end - 1);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    cout<<"\nOriginal Array is"<<endl;
    printArray(a, 10);     // fxn to print the original array
    reverseArray(a, 0, 9); // fxn to reverse the array
    cout << "\nThe reversed array is" << endl;
    printArray(a, 10);
    return 0;
}