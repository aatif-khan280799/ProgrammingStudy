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

bool isPossible(vector<int> &arr, int n, int m, int mid)
{
    int studentCnt = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCnt++;
            if (studentCnt > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = 0;
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBook(vector<int> &arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    // vector<int> arr = {10, 20, 30, 40};
    vector<int> arr = {12, 34, 67, 90};
    printArray(arr);
    int m;
    cout << "Enter no. of students: ";
    cin >> m;
    cout << "Maximum number of pages allocated to " << m << " students is: " << allocateBook(arr, arr.size(), m);

    return 0;
}