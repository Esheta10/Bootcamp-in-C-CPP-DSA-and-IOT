//10. Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class Area
{
    private:
        int a;
        float s_area;

        int l,b;
        float r_area;

        int r;
        float c_area;
    public:
        void setS(int x)
        {
            a=x;
        }
        void setR(int x,int y)
        {
            l=x;
            b=y;
        }
        void setC(int x)
        {
            r=x;
        }
        int getSquare()
        {
            return a;
        }
        int getRectangle_length()
        {
            return l;
        }
        int getRectangle_breadth()
        {
            return b;
        }
        int getCircle()
        {
            return r;
        }
        void calculateSquareArea()
        {
            s_area=a*a;
        }
        float getS()
        {
            return s_area;
        }
        void calculateRectangleArea()
        {
            r_area=l*b;
        }
        float getR()
        {
            return r_area;
        }
        void calculateCircleArea()
        {
            c_area=3.14*r*r;
        }
        float getC()
        {
            return c_area;
        }
};
int main()
{
    Area s,r,c;

    s.setS(4);
    s.calculateSquareArea();

    r.setR(5,6);
    r.calculateRectangleArea();

    c.setC(7);
    c.calculateCircleArea();

    cout<<"Area of square of length = "<<s.getSquare()<<" is "<<s.getS()<<endl;
    cout<<"Area of rectangle of length = "<<r.getRectangle_length()<<" and breadth = "<<r.getRectangle_breadth()<<" is "<<r.getR()<<endl;
    cout<<"Area of circle of radius = "<<c.getCircle()<<" is "<<c.getC()<<endl;

    return 0;
}
/*OUTPUT-
Area of square of length = 4 is 16
Area of rectangle of length = 5 and breadth = 6 is 30
Area of circle of radius = 7 is 153.86
*/