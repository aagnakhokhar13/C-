#include<iostream>
using namespace std;
class Employee
{
    public:
        char emp_name[20];
        int emp_password;
        char emp_email[10];
        void getBasicInfo()
        {
            cout << "Enter Emp Name: "; 
            cin >> emp_name;
            cout << "Enter  Employee password: ";
            cin  >> emp_password;
            cout << "Enter Employee email: ";
            cin  >> emp_email;
        }
};
class Emp
{
    public:
        int emp_contact;
        char emp_city[20];
        char emp_role;
   
        void getEmpInfo()
        {
            cout << "Enter Employee c:no :- "; 
            cin  >> emp_contact;
            cout << "Enter Employee city: ";
            cin  >> emp_city;
            cout << "Enter Employee role: ";
            cin  >>emp_role;
        }
};
class employee: public Employee, public Emp
{
    public:
        void getEmployeinfo(){
            cout << "Enter employee's basic info: "<< endl;
            getEmployeeInfo();    
            cout << "Enter employee area info : "<< endl;
            getEmpInfo();  
        }
        void printEmployeinfo()
        {
      cout << "***** Basic Information of Employee *****"<< endl;
            cout << "Name: " << emp_name << endl;     
            cout << "password : " << emp_password << endl;      
            cout << "Email: " << emp_email << endl << endl;
            cout << "***** Employee  Information *****" << endl;
            cout << "Contact no: " <<emp_contact << endl; 
            cout << "City: " << emp_city << endl; 
            cout << "Emp role: " << emp_role<< endl; 
        }
};
int main()
{
    Employee e;
    e.getEmployeinfo();
    e.printEmployeinfo();

}