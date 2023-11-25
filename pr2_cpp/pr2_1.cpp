#include<iostream>
using namespace std
class Distance {
    private:
    int feet;
    int inch;

    public:
    Distance();
    void getDist();
    void showDist();
    Distance addDist(Distance d2);

};
Distance::Distance()
{
    feet=0;
    inch=0;
}
void Distance::getDist()
{
   
    cout<<"Enter the value  of feet:";
    cin >>feet;
     cout<<"Enter the value  of inch:";
    cin >>inch;

    inch = (inch>=12) ? 12:inch;
}
void Distance:: showDist()
{
    cout<< endl<<"\tfeet :"<< feet;
      cout<< endl<<"\tinch :"<< inch;
}
Distance Distance::addDist(Distance d2)
{
    Distance temp;

    temp.feet =feet +d2.feet;
     temp.inch =inch +d2.inch;
     if(temp.inch >=12)
     {
        temp.feet++;
        temp.inch =12;

     }
     return temp;
}
int main()
{
    Distance d1;
    Distance d2;
    Distance d3;
    Distance d4;

    cout<<"Enter the Distance d1 : "<<endl;
   d1.getDist();
    cout<<"Enter the Distance d2 : ";
    d2.getDist();

    d3=d1.addDist(d2);
    cout<< endl
    << "Distance1:";
    
}