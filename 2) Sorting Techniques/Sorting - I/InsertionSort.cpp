#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // for rounds 1 to (N-1)
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            // for comparing current element to previous elements
            if (arr[j] > temp)
            {
                // shift the element
                arr[j + 1] = arr[j];
            }
            else
            {
                // stop here
                break;
            }
        }
        arr[j + 1] = temp;
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
    int arr[] = {10, 8, 11, 12, 45, 65, 7, 1};
    cout << "The original array is: ";
    print(arr, 8);
    insertionSort(arr, 8);
    print(arr, 8);
    return 0;
}

/*
    Space Complexity = O(1)
    Time Complexity = O(N^2)

    Best case = O(N)
    Worst case = O(N^2)
*/