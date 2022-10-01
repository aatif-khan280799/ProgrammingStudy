#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        // for round 1 to (N-1)
        for (int j = 0; j < n - i; j++)
        {
            // process element till (n-i)th index.
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            //already sorted
            break;
        }
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
    int arr[] = {9, 7, 12, 1, 0, 45, 67, 11};
    cout << "Original array is: ";
    print(arr, 8);
    bubbleSort(arr, 8);
    cout << "Sorted array is: ";
    print(arr, 8);
    return 0;
}
/*
    Time Complexity = O(N^2)
    Space Complexity = O(1)

    Best Case (if already sorted) = O(N) --> use swapped in above code for optimisation
    Worst Case = O(N^2)

    N = size of array. 
*/