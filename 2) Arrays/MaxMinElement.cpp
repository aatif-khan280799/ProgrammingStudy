#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void maxElement(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "max element is: " << max << endl;
}

void minElement(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Min element is: " << min << endl;
}
int main()
{
    int arr[] = {2, 5, 66, 71, 9, 34, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size); 
    cout << "Size of the array : " << size<<endl;
    maxElement(arr, size);
    minElement(arr, size);
    return 0;
}