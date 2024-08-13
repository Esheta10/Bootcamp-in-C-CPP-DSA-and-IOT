/*9. Create a base class called volume. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume.*/
#include<iostream>
using namespace std;
class volume
{
    protected:
        double v1,v2,v3;
    public:
        void get_data(double v1,double v2=0,double v3=0)
        {
            this->v1=v1;
            this->v2=v2;
            this->v3=v3;
        }
        virtual void display_volume()=0;
};
class cube:public volume
{
    public:
        void display_volume()
        {
            cout<<"Volume of cube is: "<<v1*v1*v1<<endl;
        }
};
class sphere:public volume
{
    public:
        void display_volume()
        {
            cout<<"Volume of sphere: "<<4/3*3.14*v1*v1*v1<<endl;
        }
};
int main()
{
    sphere s;
    s.get_data(7);
    s.display_volume();

    cube c;
    c.get_data(5);
    c.display_volume();

    return 0;
}
/*OUTPUT-
Volume of sphere: 1077.02
Volume of cube is: 125
*/