/*2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)*/
#include<bits/stdc++.h>
#define PI 3.14
using namespace std;
class Shape
{
    protected:
        double l1,l2;
    public:
        void set_area(double length1,double length2=0)
        {
            l1=length1;
            l2=length2;
        }
        virtual void display_area()=0;
};
class Rectangle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of rectangle: "<<l1*l2<<endl;
        }
};
class Triangle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of triangle: "<<l1*l2/2<<endl;
        }
};
class Circle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of circle: "<<PI*l1*l1<<endl;
        }
};
int main()
{
    Rectangle r;
    Triangle t;
    Circle c;
    r.set_area(3,6);
    r.display_area();

    t.set_area(5,8);
    t.display_area();

    c.set_area(7);
    c.display_area();

    return 0;
}
/*OUTPUT-
Area of rectangle: 18 
Area of triangle: 20  
Area of circle: 153.86
*/