#include<iostream>
uisng namespace std;
class Emp
{
    public:
    void data();
    void sum();
};
void Emp :: data()
{
    cout<<"Data is calling "<<endl;

}
void Emp :: sum()
{
    int a=10,b=5;
    cout<<"Ans"<<a+b <<endl;
}
int main()
{
    Emp e;
    e.data();
    e.sum();
}