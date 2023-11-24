#include<iostream>
using namespace std;
class Distance{
    private:
    int feet;
    int inches;
    public:
        
        Distance():feet(0),inches(0){}
            Distance(int ft,int in):feet(ft),inches(in){}
                void readDistance()
                {
                    cout<<"Enter the feet:";
                    cin >> feet;
                     cout<<"Enter the inch:";
                    cin >> inch;

                    void displayDistance() const
                    {
                        cout<<feet<< "feet" <<inches<< "inches";
                    }
                    Distance addDistance(const Distance& d1,const Distance& d2)const
                    {
                        Distance result;
                        result.feet=d1.feet +d2.feet;
                        result.inches=d1.inches +d2.inches;
                      
                      if(result >=12)
                      {
                        result.feet+= result.inches/12;
                          result.inches %=12;
                      }


                    return result;
                }
            };
            int main()
            {
                Distance distance1, distance2,sum;

                cout<<"Enter the first distance :"<<endl;
                distance1.readDistance();
                cout<<"Enter the second distance :"<<endl;
                 distance2.readDistance();

                 sum =sum.addDistance(distance1 , distance2);

                 cout<<"sum of distances :";
                 sum.displayDistance();
                 cout<<endl;
                
            }
        }
