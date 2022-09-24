#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;
    cout << num << "-th fibonacci number is: " << fib(num);
    return 0;
}

/*
    0 1 1 2 3 5 8 13 21 34 55 ...
    fib(n) = fib(n-1) + fib(n-2)

    fib(5) = fib(4)    +   fib (3)                                         |  fib(1) |
                /            \                                             |  fib(2) |
              fib(3)         fib(2) + fib(1)                               |  fib(3) |
              /   \            / \                                         |  fib(4) |
           fib(2)+fib(1)  fib(1) + fib(0)                                  |  fib(5) |
            /   \                                                          |  main() |
        fib(1)+fib(0)                                                      -----------
                                                                             memory

*/