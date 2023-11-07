#include<iostream>
using namespace std;
int main(){
    int cp,sp,profitorloss;

    cout<<"Enter the cost price";
    cin>>cp;

    cout<<"Enter the selling price";
    cin>>sp;

    if(sp>cp){
        profitorloss=sp-cp;
        cout<<"Profit:rs" <<profitorloss<<endl;
    }else if(cp>sp){
        profitorloss=cp-sp;
        cout<<"loss:rs" <<profitorloss<<endl;
    }else{
        cout<<"No profit,no loss"<<endl;
    }
}