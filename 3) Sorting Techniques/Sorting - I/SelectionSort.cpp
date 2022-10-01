#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {4, 9, 10, 7, 6, 11};
    cout << "Original array is: ";
    print(arr, 6);
    selectionSort(arr, 6);
    print(arr, 6);
    return 0;
}

/*
 Space Complexity = O(1)
 Time Complexity = O(N^2) for both worst and best case.
*/