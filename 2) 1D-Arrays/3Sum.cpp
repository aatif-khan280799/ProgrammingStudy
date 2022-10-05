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

//Time Complexity is O(N^3), as we are traversing in 3 different loops of size N.

void findTriplet(vector<int> &arr, int n, int K)
{
    cout << "Triplet with sum " << K << " is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                }
            }
        }
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 3, 5, 7, 2, 4, 6, 8, 9, 0};
    int K;
    printArray(arr, arr.size());
    cout << "enter the target sum: ";
    cin >> K;
    findTriplet(arr, arr.size(), K);
    return 0;
}