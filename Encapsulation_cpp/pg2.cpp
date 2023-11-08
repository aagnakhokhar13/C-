    #include<iostream>
#include<string.h>
using namespace std;
class Emp
{
    public:
    int id,salary;
    char name[50],scname[50];
    void setter(int i,char name[50],int salary,char scname[50])
    {
       this =>id=id;
        strcpy(this=>name,name);
        this=>salary=salary;
        strcpy(this=>scname,scname);

    }
    void getter()
    {
        cout<<"ID:-"<<id<<endl;
        cout<<"Name:-"<<name<<endl;
        cout<<" Salary :-"<<salary<<endl;
        cout<<"School name:-<<scname<<endl";
    }
};
int main()
{
    Emp e,e1,e2;
    e.setter(111,"Aagna",10000);
    e.getter();
    e1.setter(112,"Prachi",1000);
    e1.getter();
    e2.setter(113,"Shivani",20000);
    e2.getter();
}

