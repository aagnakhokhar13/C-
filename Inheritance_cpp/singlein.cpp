#include<iostream>
using namespace std;
class A
{
    public:
    void data()
    {
        cout<<"Data is loading "<<endl;
    }
};
class B :public A {
    public:
    void sum(){
        int a=10;
        int b=50;
        cout<<"Sum is "<<a+b<<endl;
    }
};


int  main(){
    B b;
    b.data();
    b.sum();
    
}