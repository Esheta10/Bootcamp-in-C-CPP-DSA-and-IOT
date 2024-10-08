/*1. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
triangle and rectangle from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
triangle or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in
the case of rectangles, and as base and height in the case of the triangles, and used
as follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y*/
#include<bits/stdc++.h>
using namespace std;

class Shape
{
    protected:
        double l1,l2;
    public:
        void set_data(double length1,double length2)
        {
            l1=length1;
            l2=length2;
        }
        virtual void display_area()=0;
};
class Triangle: public Shape
{
    public:
        void display_area() 
        {
            cout<<"Area of triangle: "<<l1*l2/2<<endl;
        }
};
class Rectangle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of rectangle: "<<l1*l2<<endl;
        }
};
int main()
{
    Rectangle r;
    Triangle t;
    r.set_data(20,40);
    r.display_area();
    t.set_data(20,10);
    t.display_area();

    return 0;
}
/*OUTPUT-
Area of rectangle: 800
Area of triangle: 100
*/