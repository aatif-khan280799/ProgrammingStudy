#include <bits/stdc++.h>
using namespace std;

    /*   123/10 --> 12/10 -->1/10 -->0  total no. of divisions = 3. digit=3
        unless num = 0 -->keep dividing --> no of div. = no. of digs
        Base case:- if num = 0 --> count == 1;
    */
int countDigits(int n)
{
    int cnt = 0;
    if (n == 0)
    {
        cnt = 1;
    }

    while (n != 0)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "No. of digits: " << countDigits(num);

    return 0;
}