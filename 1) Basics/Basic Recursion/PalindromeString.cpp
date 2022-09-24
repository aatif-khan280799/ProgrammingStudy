#include <bits/stdc++.h>
using namespace std;

/* prints 1 if Palindrome else prints 0*/

int helper(string s, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }

    if (s[start] != s[end])
    {
        return 0;
    }

    return helper(s, start+1, end-1);
}
int isPalindrome(string S)
{
    int n = S.size() - 1;
    return helper(S, 0, n);
}
int main()
{
    string s;
    cout << "enter a word: ";
    cin >> s;
    cout<<isPalindrome(s);
    return 0;
}