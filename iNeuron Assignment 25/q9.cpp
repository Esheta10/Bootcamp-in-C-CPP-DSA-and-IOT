//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;
        float area;
    public:
        void setN(int x)
        {
            r=x;
        }
        int getN()
        {
            return r;
        }
        void calculateArea()
        {
            area=3.14*r*r;
        }
        float getArea()
        {
            return area;
        }
};
int main()
{
    Circle c1,c2;
    c1.setN(7);
    c2.setN(8);
    c1.calculateArea();
    c2.calculateArea();

    cout<<"Area of circle of radius "<<c1.getN()<<" is "<<c1.getArea()<<endl;;
    cout<<"Area of circle of radius "<<c2.getN()<<" is "<<c2.getArea()<<endl;;

    return 0;
}
/*OUTPUT-
Area of circle of radius 7 is 153.86
Area of circle of radius 8 is 200.96
*/