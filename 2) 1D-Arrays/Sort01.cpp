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

void sortZeroOne(vector<int> &arr, int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        // arr[i]==1 and arr[j] == 0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int sum = 0;
    vector<int> arr = {1, 0, 0, 1, 1, 1, 0};
    int size = arr.size();
    cout << "Input array is: ";
    printArray(arr, size);
    sortZeroOne(arr, size);
    cout<<"sorted array is: ";
    printArray(arr, size);
    return 0;
}