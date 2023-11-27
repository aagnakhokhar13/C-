#include<iostream>
using namespace std;
class A{
    public:

    void operator ++(){
        int a=55;
        int b=66;
        cout<<"Ans:-"<<a+b<<endl;
    }

    void operator --(){
        int a=65;
        int b=46;
        cout<<"Ans:-"<<a-b<<endl;
    }
};
int main()
{
    A a;
    ++a;
    --a;
}