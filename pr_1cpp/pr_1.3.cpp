#include<iostream>
using namespace std;
int main(){
   int phy,chem,math,bio,comp,Grade;
   float per,total;

   cout<<"Enter the physics marks:-";
   cin>>phy;
   cout<<"Enter the chemistry marks:-";
   cin>>chem;
   cout<<"Enter the maths marks:-";
   cin>>math;
   cout<<"Enter the bio marks:-";
   cin>>bio;
   cout<<"Enter the comp marks:-";
   cin>>comp;
total = phy + chem + math + bio + comp;
per=total*100/500;
cout<<"per:-"<<per;
   if(per >=90){
    cout<<"A";
   }else if(per>=80){
    cout<<"B";
   }else if(per>=70){
    cout<<"C";
   }else if(per>=80){
    cout<<"D";
   }else if(per>=80){
    cout<<"E";
   }else{
    cout<<"E";
   }
   cout<<"Per :-"<<per <<"%"<<endl;
   cout<<"Grade :-"<<Grade;

}
