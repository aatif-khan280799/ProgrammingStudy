#include <bits/stdc++.h>
using namespace std;

int main()
{
    // consider a[] = {1,3,5,2}
    sort(a, a + n);           // {1,2,3,5}
    sort(v.begin(), v.end()); // same for vectors

    sort(a + 2, a + 4); //{1,3,2,5} --> sorts elements b/w idx [2,4)

    sort(a, a + n, greater<int>); // sort in descending order --> {5,3,2,1}

    // My way of sorting (un-conventional way)
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort a[] according to 2nd element
    // if 2nd element is same, then sort
    // it according to 1st element but in descending order
    sort(a, a + n, comp); // O/P --> {{4,1}, {2,1}, {1,2}}
    // comp is a boolean function working as comparator.

    // return setBits
    int num = 7                          // binary of 7 = 111, no.of set bits = 3
        int cnt = __builtin_popccount(); // return the number of set bits.

    long long num = 165786578687;
    int cnt = __builtin_popcountll(); // return the number of set bits.

    // next permutation
    /*
      123 -> 132 -> 213 -> 231 -> 312 -> 321 = 6 permutations possible for "123" string.
    */
    string s = "123"; // before finding permutations just sort the string.
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));


    // to find the max/min element in a array
    int maxi = *max_element(a, a+n);
    int mini = *min_element(a, a+n);

    return 0;
}

// boolean comp fxn for comparator refer line no. 15-16.
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // they are same
    if (p1.first > p2.first)
        return true;

    return false;
}