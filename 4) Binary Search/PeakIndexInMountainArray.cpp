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

int peakIndex(vector<int> nums, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (nums[mid] < nums[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> arr = {2, 3, 4, 10, 4, 1};
    cout << "Input array: ";
    printArray(arr, arr.size());
    cout << "Index of peak element in the mountain array is: " << peakIndex(arr, arr.size());
    return 0;
}