#include<iostream>
using namespace std;
 
class Circle
{   
   
    private: 
        int radius;
      
  
    public:    
    float area()
        { 
            return 3.14*radius*radius;
        }
     
};
 

int main()
{   
     Circle obj;
     
 
 
    obj.radius = 8;
     
    cout << "Area is:" << obj.area();
    return 0;
}