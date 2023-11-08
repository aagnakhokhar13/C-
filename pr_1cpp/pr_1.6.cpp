#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:-";
    cin >> n;
    int a=0,b=1;
    int c;

    if(n>=1){
        cout<<"Fibonacci series"<<a;
    }if(n>=2){
        cout<<" "<<b;
    }
    for(i=3;i<=n;i++){
        c= a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    cout<<endl;
}