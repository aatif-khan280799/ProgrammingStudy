#include <bits/stdc++.h>
using namespace std;


// Time complexity of this solution is O(N*M)
// Optimised solution is also there in "optimizedArrayIntersection.cpp" program.

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> findIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return ans;
}
int main()
{
    int size1, size2;
    // int arr1[] = {2, 4, 6, 8, 10};
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};
    cout << "Input arrays are: " << endl;
    printArray(arr1, arr1.size());
    printArray(arr2, arr2.size());
    cout << "Intersection of both arrays are: ";
    findIntersection(arr1, arr1.size(), arr2, arr2.size());

    return 0;
}