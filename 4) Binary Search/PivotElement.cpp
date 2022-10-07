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
int main()
{
    // vector<int> arr = {8, 10, 17, 1, 3};
    vector<int> arr = {1, 3, 4, 0, 2, 8};
    printArray(arr, arr.size());
    cout << "Pivot is at index: " << getPivot(arr, 5);

    return 0;
}