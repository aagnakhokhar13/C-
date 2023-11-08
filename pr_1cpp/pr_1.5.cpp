#include<iostream>
using namespace std;
int main(){
    int num,OrigNum,RevNum,remainder;
    cout<<"Enter the number:-";
    cin >>num;
    OrigNum == num;

    while(num>0){
        remainder = num % 10;
        RevNum = RevNum *10 + remainder;
        num /=10;
    }
    if(OrigNum==RevNum){
        cout<<"Number is palindrome";
    }else{
       cout<<"Number is palindrome"; 
    }
    cout<<"Reverse number "<<RevNum;
}