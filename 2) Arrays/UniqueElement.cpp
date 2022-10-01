#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int uniqueElement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {2, 3, 1, 6, 3, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The input array is: ";
    printArray(arr, size);
    cout << "The unique element in the array : " << uniqueElement(arr, size);
    ;

    return 0;
}

/*

XOR operation:
    a^a = 0
    0^a = a

*/