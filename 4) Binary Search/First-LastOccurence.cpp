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

int firstOccurence(vector<int> &arr, int n, int K)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == K)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (K > arr[mid])
        {
            // right me jao
            s = mid + 1;
        }
        else if (K < arr[mid])
        {
            // left part me jao
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(vector<int> &arr, int n, int K)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == K)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (K > arr[mid])
        {
            // right me jao
            s = mid + 1;
        }
        else if (K < arr[mid])
        {
            // left part me jao
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastOccurence(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOccurence(arr, n, k);
    p.second = lastOccurence(arr, n, k);
    cout << p.first << " and " << p.second;
    return p;
}
int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 3, 3, 5};
    printArray(arr);
    int k = 3;
    cout << "First occurence of " << k << " is at index: " << firstOccurence(arr, arr.size(), k) << endl;
    cout << "Last occurence of " << k << " is at index: " << lastOccurence(arr, arr.size(), k) << endl;
    cout << "First and Last Occurence of " << k << " is: ";
    firstAndLastOccurence(arr, arr.size(), k);
    // cout << "\nTotal number of occurenece of " << k << " is " << (lastOccurence(arr, arr.size(), k) - firstOccurence(arr, arr.size(), k) + 1);
    return 0;
}