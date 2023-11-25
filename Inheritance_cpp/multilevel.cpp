#include<iostream>
using namespace std;
class A{
    public:
    void mul(){
        int a=50,b=4;
        cout<<"Multiply :-"<<a*b<<endl;
       
    }
};
class B :public A{
    public:
    void div(){
        int a=60,b=5;
        cout<<"Division :-"<<a/b<<endl;
    }
};
class C :public B{
    public:
    void sub(){
        int a=55,b=45;
        cout<<"Sub :-"<<a-b<<endl;
    }
};
class D :public C{
    public:
    void sum(){
        int a=60,b=5;
        cout<<"SUM :-"<<a+b<<endl;
    }
};
int main(){
        D d;
        d.mul();
        d.div();
        d.sub();
        d.sum();
}
