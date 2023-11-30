#include<iostream>
using namespace std;
class sum
{
    private:
    int a,b,ans;
    public:
  
    void add()
    {
        cout<<"Enter the a :-";
        cin >>a;
        cout<<"Enter the b :-";
        cin >>b;
        cout<<"Ans :-"<<a+b;
        
        

    }

};
int main()
{
    sum s;
    s.add();
    return 0;
}