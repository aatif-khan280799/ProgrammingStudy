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

vector<int> findDuplicates(vector<int> &arr, int n)
{
    // vector<int> temp;
    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == arr[i - 1])
    //     {
    //         temp.push_back(arr[i]);
    //     }
    // }
    // for (auto it : temp)
    // {
    //     cout << it << " ";
    // }
    // return temp;

    if (arr.empty())
        return {};

    vector<int> answer;

    sort(arr.begin(), arr.end());

    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        // using XOR
        if ((ans ^ arr[i]) == 0)
        {
            answer.push_back(arr[i]);
        }
        ans = arr[i];
    }
    for (auto it : answer)
    {
        cout << it << " ";
    }
    return answer;
}
int main()
{
    vector<int> arr = {1, 3, 2, 3, 2, 1, 5, 6, 7};
    int size = arr.size();
    cout << "Input array is: ";
    printArray(arr, size);
    cout << "Duplicate elements are: ";
    findDuplicates(arr, size);
}