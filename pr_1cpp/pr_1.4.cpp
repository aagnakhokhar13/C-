#include<iostream>
using namespace std;
main(){
    char daysInput;
    
  cout<<"Enter the first letter of days(M,T,W,t,F,S,s)";
  cin >> daysInput;
    switch(daysInput){
        case 'M':
        cout<<"Today is Monday"<<endl;
        break;
         case 'T':
        cout<<"Today is Tuesday"<<endl;
        break;
         case 'W':
        cout<<"Today is Wednesday"<<endl;
        break;
         case 't':
        cout<<"Today is Thursday"<<endl;
        break;
         case 'F':
        cout<<"Today is Friday"<<endl;
        break;
         case 'S':
        cout<<" Today is Saturday"<<endl;
        break;
         case 's':
        cout<<"Today is Sunday"<<endl;
        break;

        default:
          cout<<"Invalid choice";
          break;
               


    }
}