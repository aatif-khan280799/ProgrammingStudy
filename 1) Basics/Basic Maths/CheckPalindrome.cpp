#include <iostream>  
using namespace std;  

// Driver Code
int main()  
{  
    
    int n , digit, reverse = 0, temp;    
    
    cout << "Enter the Input Number = ";    
    cin >> n;
    temp = n;    
    
    while(n > 0)    
    {    
        digit = n % 10;
        reverse = reverse*10 + digit;
        n = n / 10;
    }  
    
    if(temp == reverse)    
        cout << "Palindrome";    
    else    
        cout << "Not a Palindrome";   
    return 0;  
}  