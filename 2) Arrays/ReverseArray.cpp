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

void reverseArray(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The input array is: ";
    printArray(arr, size);
    reverseArray(arr, size);
    cout << "Reversed array is: "; 
    printArray(arr, size);
    return 0;
}