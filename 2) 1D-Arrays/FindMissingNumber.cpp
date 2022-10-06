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

int missingNumber(vector<int> &nums)
{

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int n = nums.size();

    int sumRes = (n * (n + 1)) / 2;
    int ans = sumRes - sum;
    return ans;
}
int main()
{
    vector<int> arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int n = arr.size();
    cout << "Size of the array: " << n << endl;
    cout << "Input array is: ";
    printArray(arr, n);
    cout << "Missing number is : " << missingNumber(arr);
    return 0;
}