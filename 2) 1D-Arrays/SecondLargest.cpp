#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int secondLargest(vector<int> &arr)
{
    /*
  Let us assume that initially, the largest element (first_largest) present in the array is INT_MIN.
  */
    int first_largest = INT_MIN;

    /*
    The first loop will find the first_largest element present in the array.
    */
    for (int i = 0; i < arr.size(); i++)
    {
        /*
        Update the value of first_largest if the current element is larger than the first_largest value till now.
        */
        if (first_largest < arr[i])
        {
            first_largest = arr[i];
        }
    }

    /*
    Now find the largest element present in the array which is smaller than the first_largest.

    Initially, the second element present in the array is INT_MIN.
    */

    int second_largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > second_largest && arr[i] < first_largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main()
{
    vector<int> arr = {10, 20, 30, 2, 1, 44, 55};
    int n = arr.size();
    printArray(arr);
    cout << "Second largest element: " << secondLargest(arr);
    return 0;
}