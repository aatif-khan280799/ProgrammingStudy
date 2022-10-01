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
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return 0;
}
int main()
{
    int arr[] = {22, 33, 44, 55, 1, 5, 6, 99, 100};
    int key;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array is: ";
    printArray(arr, size);
    cout << "Enter the element to be searched in the array: ";
    cin >> key;
    cout << "The searched element " << key << " is present at index: " << linearSearch(arr, size, key);
    return 0;
}