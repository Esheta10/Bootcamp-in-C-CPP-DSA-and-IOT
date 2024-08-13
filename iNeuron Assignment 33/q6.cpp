/*6.Extend above to display the area of circles. For a circle,only one value is needed i.e.
radius but in get_data() function 2 values are passed.*/
#include<bits/stdc++.h>
#define PI 3.14
using namespace std;

class Shape
{
    protected:
        double length1,length2;
    public:
        void set_data(double length1,double length2=0)
        {
            this->length1=length1;
            this->length2=length2;
        }
        virtual void display_area()=0;
};
class Triangle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of triangle is: "<<length1*length2/2<<endl;
        }
};
class Rectangle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of rectangle: "<<length1*length2<<endl;
        }
};
class Circle:public Shape
{
    public:
        void display_area()
        {
            cout<<"Area of circle: "<<3.14*length1*length1<<endl;
        }
};
int main()
{
    Circle c;
    c.set_data(7);
    c.display_area();

    Rectangle r;
    r.set_data(50,60);
    r.display_area();
    
    Triangle t;
    t.set_data(80,90);
    t.display_area();

    return 0;
}
/*OUTPUT-
Area of circle: 153.86
Area of rectangle: 3000
Area of triangle is: 3600
*/