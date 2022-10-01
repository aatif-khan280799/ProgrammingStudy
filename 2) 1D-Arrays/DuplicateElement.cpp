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

int findDuplicate(int arr[], int n)
{
    int ans = 0;

    // XORing all array elements
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
        cout<<"XORing element "<<i<<" : "<<ans<<endl;
    }

cout<<"-------------------------------------------------------"<<endl;
    // XORing 1 to N-1
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
        cout<<"XORing 1 to N-1: "<<i<<" "<<ans<<endl;
    }
    return ans;
}
int main()
{
    int arr[] = {6, 3, 1, 5, 4, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The input array is: ";
    printArray(arr, size);
    cout << "Duplicate element is: " << findDuplicate(arr, size);
}