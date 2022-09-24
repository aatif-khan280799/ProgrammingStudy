#include <bits/stdc++.h>
using namespace std;

int printFun(int n)
{

    if (n <= 0)
        return 0;

    else
        printFun(n - 1);
    cout << n << " ";
}

// Driver Code
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    printFun(num);
}
