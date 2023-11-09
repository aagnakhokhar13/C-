#include<iostream>
using namespace std;
class Emp
{
    public:
    int id;
    char name[50];
    static char scname[50];
    void data(int id,char name[50],int salary){
        this ->id-=id;
        strcpy(this ->name,name);
      
    }
    void getData()
    {
        cout<<"id:-"<<id<<endl;
        cout<<"name:-"<<name<<endl;
        cout<<"school name:-"<<scname<<endl;
    }
};
chae Emp :: scname[50]="GAJERA VIDHYABHAVAN";
int main(){
    Emp e,e1;
    e.data(111,"AAGNA");
    e1.data(222,"PRACHI");
    e.get Data();
    e1.get Data();
}