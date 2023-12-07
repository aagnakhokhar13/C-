#include<iostream>
using namespace std;
class bank
{
    char name[20];
    int acno;
    char actype[20];
    int bal;
    public:
    
    void opbal(void);
    void deposit(void);
    void withdraw(void);
    void display(void);

};

void bank::opbal(void)
{
    cout<<endl;
    cout<<"Enter the name :-"<<endl;
    cin >>name;
    cout<<"Enter the A/c no:- :-"<<endl;
    cin >>acno;
    cout<<"Enter the A/c type :-"<<endl;
    cin >>actype;
    cout<<"Enter the opening balance :-"<<endl;
    cin >> bal;

}
void bank ::deposit(void)
{
    int deposit=0;
    cout<<"Enter the deposit amount :-"<<endl;
    cin >> deposit;
    bal = deposit + bal;
    cout<<"Deposit balance :-"<<endl;

}
void bank::withdraw(void)
{
  int withdraw=0;
  cout<<"Balance amount :-"<<endl;
  cout<<"Enter withdraw amount :-"<<endl;
  cin >> withdraw;

    if(bal > withdraw)
    {
        bal = bal- withdraw;
        cout<<"After withdraw balance is:-"<<bal <<endl;
    }
    else
    {
       cout <<"not enough balance ";
    }
}
void bank::display(void)
{
    cout <<endl<<endl<<endl;
    cout<<"DETAILS :-"<<endl;
    cout<<"name:-"<<name<<endl;
    cout<<"A/c no:-"<<acno<<endl;
    cout<<"A/c type :-"<<actype<<endl;

}
int main()
{
    bank o1;
    int choice;
    do{
        cout<<"Banking system:-"<<endl;
        cout<<"Choice list:-"<<endl;
        cout<<"1 for assign initial value:-"<<endl;
        cout<<"2 for To deposit:-"<<endl;
        cout<<"3 for To withdraw:-"<<endl;
        cout<<"4 for To display all details:-"<<endl;
        cout<<" 5 for Exit "<<endl;
        cout<<"Enter your choice :-"<<endl;
        cin >> choice;
   
      switch(choice)
      {
        case 1: o1.opbal();
        break;

         case 2: o1.deposit();
        break;

         case 3: o1.withdraw();
        break;

         case 4: o1.display();
        break;
        
        case 5: goto end;
        
        default :
        cout<<"invalid choice:-"<<endl;

      }
    }while(1);
    end:
    return 0;
}