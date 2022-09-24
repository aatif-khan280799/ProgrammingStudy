#include<bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    int radius, areaCircle=0;
    int l,b,areaReact=0;
    cout<<"Enter choice: (1 or 2) ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter radius: ";
            cin>>radius;
            areaCircle = 3.14*(radius)*(radius);
            cout<<areaCircle;
      break;

        case 2:
            cout<<"enter l and b: ";
            cin>>l>>b;
            areaReact = l*b;
            cout<<areaReact;
      break;
        default:
            cout<<"Invalid selection";
    }


}
