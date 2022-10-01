#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n)
{
    for(int i = 0; i < n; i += 2)
    {
        if(i+1 < n)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The input array is: ";
    printArray(arr, size);
    swapAlternate(arr, size);
    cout << "The swapped array : ";
    printArray(arr, size);
    return 0;
}