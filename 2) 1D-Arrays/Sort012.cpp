#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Sort012(vector<int> &arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{

    vector<int> arr = {1, 0, 0, 2, 2, 1, 0, 0, 0, 1, 1, 2, 1, 2, 1, 0};
    int size = arr.size();
    cout << "Input array is: ";
    printArray(arr, size);
    Sort012(arr, size);
    cout << "Sorted array is: ";
    printArray(arr, size);
    return 0;
}