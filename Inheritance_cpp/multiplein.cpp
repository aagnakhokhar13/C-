#include<iostream>
using namespace std;
class A
{
    public:
    void data(){
        cout<<"Data is loading "<<endl;
    }
};
class B {
    public:
    void sum(){
        int a=10;
        int b=50;
        cout<<"Sum is "<<a+b<<endl;
    }
};
class C: public A,public B{
    public:
    void min(){
        int a=50;
        int b=40;
        cout<<"MIN :-"<<a-b<<endl;
    }
};

int  main(){
    C c;
    c.data();
    c.sum();
    c.min();
}