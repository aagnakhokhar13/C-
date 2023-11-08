#include<iostream>
using namespace std;
int main(){
    int i,j,s;
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            cout<<j;
        }
        for(s=4;s>=i;s--){
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

       for(i=1;i<=5;i++){
        for(j=i;j>=1;j--){
           cout<<j;
           
        }
        for(s=4;s>=i;s--){
            cout<<" ";
        }
        cout<<endl;
       }        
    }
