#include <bits/stdc++.h>
using namespace std;

int printSum(int num)
{
    int sum;
    if (num <= 1)
        return num;
    else
        return num + printSum(num - 1);
}
int main()
{
    int n;
    cout << "Enter a num: ";
    cin >> n;
    cout << "Sum of " << n << " numbers is: " << printSum(n);
}