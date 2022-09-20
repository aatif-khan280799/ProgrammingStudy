#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;  // rev_num = 0 + 3 = 3 --> 30 + 2 =32 --> 320 + 1 =321
        num = num / 10;  // num = 12 --> 1
    }
    return rev_num;  // 321
}
int main()
{
    // 123 --> 321
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << "Reverse of no. is : " << reverseDigits(number);
    return 0;
}