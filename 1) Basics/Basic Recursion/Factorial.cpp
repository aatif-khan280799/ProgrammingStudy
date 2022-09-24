#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << factorial(num);
}

/*
    fact(5) = 5 * fact (4)
    fact(4) = 4 * fact(3)
    fact(3) = 3 * fact(2)
    .....
    fact(0) = 1

*/