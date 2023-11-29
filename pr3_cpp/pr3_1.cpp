#include<iostream>
using namespace std;

class mother 
{
    public:
    void display()
    {
        cout<<"Hello daughter "<<endl;


    }

};
class daughter:public mother  
{
    public:
    void display()
    {
        cout<<"Hello mother "<<endl;

    }
};

int main()
{
    daughter d;
    d.display();

      
}