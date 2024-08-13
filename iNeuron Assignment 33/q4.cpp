/*4. Create a base class called shape. Use this class to store 2 double type values that
could be used to compute the area of figures. Derive 2 specific classes called triangle
and rectangle from the base shape. Add to the base class a member function
get_data() to initialise base class data members and another member function
display_area() to compute and display the area of figures. Make display_area() as a
virtual function and redefine this function in derived classes to suit their requirements.
Using these 3 classes, design a program that will accept the dimensions of the
shapes interactively and display area.*/
#include<bits/stdc++.h>
using namespace std;
class Shape
{
    protected:
        int x,y;
    public:
        void get_data(int a,int b)
        {
            x=a;
            y=b;
        }
        virtual void display_area()=0;//pure virtual function
};
class Triangle:public Shape
{
  public:
    void display_area()
    {
        cout<<"Area of triangle: "<<x*y/2<<endl;
    }
};
class Rectangle:public Shape
{
  public:
    void display_area()
    {
        cout<<"Area of rectangle: "<<x*y<<endl;
    }
};
int main()
{
    Rectangle r;
    Triangle t;

    r.get_data(30,20);
    r.display_area();

    t.get_data(80,60);
    t.display_area();

    return 0;
}
/*OUTPUT-
Area of rectangle: 600
Area of triangle: 2400
*/