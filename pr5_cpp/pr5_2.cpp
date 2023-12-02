#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void circle()=0;
    virtual void triangle()=0;

};
class Derived :public Base
{
   public:
   void circle()
   {
    int r;
    float ans;
    cout<<"Enter the radius :-";
    cin >>r;
    ans =3.14 * r * r;
    cout<<"circle area :-"<<ans<<endl;
   }
   void triangle()
   {
    int b,h;
    float ans;
    cout<<"Enter the base :-";
    cin >>b;
    cout<<"Enter the height :-";
    cin >>h;
    ans = 0.5 * b * h;
    cout<<"triangle area :-"<<ans<<endl;
   }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->circle();
    b->triangle();
    return 0;
}