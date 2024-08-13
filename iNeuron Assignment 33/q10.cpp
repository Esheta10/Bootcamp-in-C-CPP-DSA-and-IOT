/*10. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area.*/
#include<iostream>
using namespace std;
class shape
{
    protected:
            int x,y;
    public:
        void get_data(int a,int b=0)
        {
            x=a;
            y=b;
        }
        virtual void display_area()=0;
};
class square:public shape
{
    public:
        void display_area()
        {
            cout<<"Area of square is: "<<x*x<<endl;
        }
};
class parallelogram:public shape
{
    public: 
        void display_area()
        {
            cout<<"Area of parallelogram is: "<<x*y<<endl;
        }
};
int main()
{
    square s;
    s.get_data(6);
    s.display_area();

    parallelogram p;
    p.get_data(4,8);
    p.display_area();

    return 0;
}
/*OUTPUT-
Area of square is: 36
Area of parallelogram is: 32
*/