#include <bits/stdc++.h>
using namespace std;

// time complexity = O(max(N,M))

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
    int i = 0, j = 0;

    while (i < n && j < m) // run the loop until it's in limit
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
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
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};
    cout << "Input arrays are: " << endl;
    printArray(arr1, arr1.size());
    printArray(arr2, arr2.size());
    cout << "Intersection of both arrays are: ";
    findIntersection(arr1, arr1.size(), arr2, arr2.size());

    return 0;
}