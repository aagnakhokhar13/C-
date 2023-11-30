#include<iostream>
using namespace std;
class A
{

public:
virtual void display()
{
    cout<<"Base class is involved .."<<endl;
}
};
class B: public A
{
    public:
    void display()
    {
        cout<<"Derived class is called.."<<endl;
    }

};
class C :public B
{
     public:
     void display()
     {
        cout<<"C class is called.."<<endl;
     }
};
int main()
{
    A *a;
    B b;
    C c;
    a=&c;
    a ->display();
}
