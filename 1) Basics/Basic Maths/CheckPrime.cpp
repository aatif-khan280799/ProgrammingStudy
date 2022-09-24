#include <bits/stdc++.h>
using namespace std;

string isPrime(int n)
{
    if (n <= 1)
        return "Not prime"; // corner case.

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return "Not Prime";

        return "Prime";
    }
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << isPrime(num);
    return 0;
}