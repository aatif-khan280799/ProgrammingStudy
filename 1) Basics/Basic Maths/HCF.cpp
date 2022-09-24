#include <bits/stdc++.h>
using namespace std;

int getHCF(int a, int b)
{
    while(a != b)               //repeated subtraction method.
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout<<"HCF: "<<getHCF(num1, num2);
    return 0;
}