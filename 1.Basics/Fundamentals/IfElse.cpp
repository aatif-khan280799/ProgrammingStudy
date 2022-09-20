#include<bits/stdc++.h>
using namespace std;

int main() {

  int a,b;
  cout << "Enter two numbers:" << std::endl;
  cin >> a>>b;

  if (a == b) {
    cout<<"equal";
  }
  else if (a < b) {
    cout<<"lesser";
  }
  else
    cout << "greater" << std::endl;
  return 0;
}
