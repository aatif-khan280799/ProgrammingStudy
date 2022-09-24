#include <bits/stdc++.h>
using namespace std;

int print(int num)
{
    if(num <= 0)
        return 0; 
    else
        print(num - 1);
    cout<<"Name"<<endl;
}
int main()
{
    int num;
    cout<<"Enter number of times u want to print the name: ";
    cin >> num;
    print(num);
    return 0;
}