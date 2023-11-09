#include<iostream>
using namespace std;
class Emp
{
    public:
    int id,salary;
    char name[50];
    void setter(int id,char name[50],int salary){
        this ->id=id;
        strcpy(this ->name,name);
        this ->salary=salary;
}
    void getter()
    {
        cout<<"Emp id:-"<<id<<endl;
        cout<<"Emp name:-"<<name<<endl;
        cout<<"Emp salary:-"<<salary<<endl;

    }

};
int main()
{
    Emp e[50];
    int no,i,id,salary;
    char name[50];
    cout<<"How many record add:-";
    cin >> no;
    for(i=0;i<no;i++)
    {
        cout<<"Enter the emp id:-";
        cin >> id;
        cout<<"Enter the emp name:-";
        cin >> name;
        cout<<"Enter the emp salary:-";
        cin >> salary;
        e[i].setter(id,nmae,salary);
    }
    for(i=0;i<no;i++)
    {
      e[i].getter;  
    }
}
