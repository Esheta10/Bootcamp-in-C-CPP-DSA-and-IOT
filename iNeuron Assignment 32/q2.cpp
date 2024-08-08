/*2. Define a class Rectangle and overload area function for different types of data type.*/
#include<iostream>
using namespace std;
class Rectangle
{
    private:
       float are;
    public:
       void area(int x,int y)
       {    
            are=x*y;
       }
       void area(int x,double y)
       {
            are=x*y;
       }
       void area(double x,int y)
       {
             are=x*y;
       }
       void area(double x,double y)
       {
            are=x*y;
       }
       void display()
       {
        cout<<"Area of rectangle is: "<<are<<endl;
       }
        
};
int main()
{
    Rectangle r;

    r.area(5,7);
    r.display();

    r.area(5,7.2);
    r.display();

    r.area(5.2,7);
    r.display();

    r.area(5.2,7.2);
    r.display();

    return 0;
}
/*OUTPUT-
Area of rectangle is: 35
Area of rectangle is: 36
Area of rectangle is: 36.4
Area of rectangle is: 37.44
*/
