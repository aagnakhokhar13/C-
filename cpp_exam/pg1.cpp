#include<iostream>
using namespace std;
#define MAX 5
class Employee
{
    private:
    char name;
    int year;
    int salary;
    char address;
    
    public:
    void getDetails(void);
    void putDetails(void);

};


void Employee::getDetails(void){
   
    cout<<"Enter the name :";
    cin >> name;
    cout<<"Enter the year of joining :";
    cin >> year;
    cout<<"Enter the salary :";
    cin >> salary;
    cout<<"Enter the address :";
    cin >> address;
}
void Employee:: putDetails(void){
    
     cout<<"Employee details :-";
    cout<<"Name" <<name <<endl ;
    cout<<"Year of joining" <<year <<endl ;
    cout<<"Salary of employee" <<salary<<endl;
    cout<<" Address of employee" <<address;
 
    }

int main()
{
  Employee e[MAX];
  int i;
   
  
 
   for(i=0;i<3;i++)
    {
        cout<<"Enter  details:- "<<i+1<<endl;
        e[i].getDetails();
        
    }
    cout<<endl;
     for(i=0;i<3;i++)
    {
        
        cout<<"Print details"<<(i+1)<<"endl";      
        e[i].putDetails();
        
     }
   }


