#include<iostream>
using namespace std;
 

class Circle
{
    public: 
        int radius;
         
        float area()
        {
            return 3.14*radius*radius;
        }
     
};
 

int main()
{
    Circle obj;
     

    obj.radius = 5;
     
    cout << "Radius is: " << obj.radius <<endl;
    cout << "Area is: " << obj.area();
    return 0;
}