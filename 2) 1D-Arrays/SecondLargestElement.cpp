#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int secondLargest(vector<int> nums)
{
    int max = INT_MIN;
    int smax = INT_MIN;

    // find the max element
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    // find second largest element
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > smax && nums[i] < max)
        {
            smax = nums[i];
        }
    }
    return smax;
}

int main()
{
    vector<int> arr = {2, 5, 66, 71, 9, 34, 7};
    printArray(arr);
    cout << "Second largest element is: " << secondLargest(arr);

    return 0;
}