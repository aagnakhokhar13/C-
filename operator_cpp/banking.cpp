#include<iostream>
using namespace std;
class bank
{
    public:
     int userid,pass,withdraw,amt;
      void createAc{
        cout<<"Enter the userid:-";
        cin >> userid;
        cout<<"Enter the password:-";
        cin >> pass;
        cout<<"How many amount :-";
        cin >> amt;

      }
};
      int checkuserlogin()
      {
        int id,password;

        cout<<"Enter the userid:-";
        cin>> id;
        cout<<"Enter the password:-";
        cin>> password;

        if(userid==id && password==pass)
        {
            return 1;
        }
        else
        {
            return 0;
        }
      }
        void withdrawmoney()
        {
            int ans=checkuserlogin();
            int with;
            if(ans ==1)
            {
                cout<<"How many withdraw money:-";
                cin >>with;

                if(with <amt)
                {
                    amt = amt - with;
                    cout<<"Your current balance is :-"<<amt<<endl;
                }
                else
                {
                     cout<<"Your account does not have this such money";
                }
            }
            else{
                cout<<"User id and password not valid :-"<<endl;
            }
            };
        
        int main()
        {
            bank b;
            int ch;

            do
            {
             
                cout<<"Press 1 for open account"<<endl;
                cout<<"Press 2 for withdraw money"<<endl;
                cout<<"Press 3 for deposite money"<<endl;
                cin >>ch;

                switch(ch)
                {
                    case 1:
                    b.createAc();
                    break;

                    case 2:
                    b.withdrawmoney();
                    break;
                }
            }while (ch!=0);
         
}