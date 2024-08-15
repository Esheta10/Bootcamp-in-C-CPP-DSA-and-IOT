/*7. Write a C++ Program of Templated class derived from Non-templated class.*/
#include<iostream>
using namespace std;
class Shape
{
    string shape;
    public:
        Shape()//default constructor
        {

        }
        Shape(string s)//parameterized constructor
        {
            shape=s;
        }
        void setShape(string s)
        {
            shape=s;
        }
        string getShape()
        {
            return shape;
        }
};
template <typename T>
class Circle:public Shape
{
    T x;
    T y;
    T radius;
    public:
        Circle(T centerX,T centerY,T r,string s):Shape(s)   //constructor overloading
        {
            x=centerX;
            y=centerY;
            radius=r;
        }
        Circle(T centerX,T centerY,T r):Shape()
        {
            x=centerX;
            y=centerY;
            radius=r;
        }
        Circle(T r):Shape()
        {
            radius=r;
        }
        Circle(){}
        T area()
        {
            return 3.14*radius*radius;
        }
};
int main()
{
    Circle<float>c(0.0,0.0,10.0,"Circle");
    cout<<"\nArea of circle is: "<<c.area();
    cout<<"\nShape is: "<<c.getShape();
}
/*OUTPUT-
Area of circle is: 314
Shape is: Circle   
*/