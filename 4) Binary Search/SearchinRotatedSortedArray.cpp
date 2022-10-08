#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int binarySearch(vector<int> &arr, int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2; // to avoid "OUT OF BOUND" error for int data type.

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2; // to avoid "OUT OF BOUND" error for int data type.
    }

    return -1;
}

int getPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
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

int findPosition(vector<int> &arr, int n, int k)
{
   int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1])
    {
		return binarySearch(arr, pivot, n-1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot-1, k);
    }
}

int main()
{
    vector<int> arr = {1, 3, 4, 0, 2, 8};
    int k = 0;
    printArray(arr);
    cout << "Enter the element to be searched in the array: ";
    cin >> k;
    cout << "Element " << k << " found at index: " << findPosition(arr, arr.size(), k);
    return 0;
}