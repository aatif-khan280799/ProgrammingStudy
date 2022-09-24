#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    cout << "Factors of the number are: ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";   //time complexity = O(n)
        }
    }
    return 0;
}