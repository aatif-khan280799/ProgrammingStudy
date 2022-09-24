#include <bits/stdc++.h>
using namespace std;

int printReverse(int n)
{
    if (n <= 0)
        return 0;
    else 
        cout << n << " ";
    return printReverse(n - 1);
}

//Driver Code
int main()
{
    int num;
    cout << "Enter a num N to print N to 1: ";
    cin >> num;
    printReverse(num);
}