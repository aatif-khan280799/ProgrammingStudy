#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge two sorted arrays;
    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }

    while(index1  < len1)
    {
        arr[k++] = first[index1++];
    }
    while(index2  < len2)
    {
        arr[k++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    // base case
    if (s >= e)
    {
        return;
    }

    // left part sort
    mergeSort(arr, s, mid);

    // right sort
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 9, 90, 21, 23, 4, 1, 33, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    print(arr, size);
    mergeSort(arr, 0, size - 1);
    cout << "Sorted array: ";
    print(arr, size);
    return 0;
}