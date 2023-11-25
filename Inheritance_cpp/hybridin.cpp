#include<iostream>
using namespace std;
class A  
{
    public:
    void sum()
    {
        int a=55;
        int b=66;
        cout<<"SUM :-"<<a+b<<endl;
    }
};
class B:public A
{
    public:
    void circle(){
        int rad=5;
        float pi=3.14;
        float area;
        cout<<"Area of circle :-"<<pi*rad*rad<<endl;
    }
};
class C
{
    public:
    void data(){
       
        cout<<"Data is updated:-"<<endl;
    }
};
class D: public B,public C
{
    public:
    void sub(){
        int a=75;
        int b=66;
        cout<<"SUB :-"<<a+b<<endl;
    }
};
int main()
{
    D d;
    d.sum();
    d.circle();
    d.data();
    d.sub();

}
