//8. Define a class Rectangle and define an instance member function to find the area of
//the rectangle.
#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int l,b,area;
    public:
        void setN(int x,int y)
        {
            l=x;
            b=y;
        }
        int getL()
        {
            return l;
        }
        int getB()
        {
            return b;
        }
        void calculateArea()
        {
            area=l*b;
        }
        int getArea()
        {
            return area;
        }
};
int main()
{
    Rectangle r1,r2;
    r1.setN(4,5);
    r2.setN(7,8);
    r1.calculateArea();
    r2.calculateArea();

    cout<<"Area of rectangle with length = "<<r1.getL()<<" and breadth = "<<r1.getB()<<" is "<<r1.getArea()<<endl;
    cout<<"Area of rectangle with length = "<<r2.getL()<<" and breadth = "<<r2.getB()<<" is "<<r2.getArea()<<endl;
     
     return 0;
}
/*OUTPUT-
Area of rectangle with length = 4 and breadth = 5 is 20
Area of rectangle with length = 7 and breadth = 8 is 56
*/