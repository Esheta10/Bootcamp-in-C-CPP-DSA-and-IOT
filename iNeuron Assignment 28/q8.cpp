/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y,z;
    public:
        Coordinate(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        Coordinate(){}

        Coordinate operator,(Coordinate c)
        {
            Coordinate temp;
            temp.x=c.x;
            temp.y=c.y;
            temp.z=c.z;
            return temp;
        }
        void display()
        {
            cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
        }
};
int main()
{
    Coordinate c1(4,5,6);
    Coordinate c2(7,8,9);
    Coordinate c3;

    c3=(c1,c2);
    c3.display();

    Coordinate c4(10,11,12);

    c3=(c1,c2,c4);
    c3.display();

    return 0;

}
/*OUTPUT-
x= 7 y= 8 z= 9
x= 10 y= 11 z= 12
*/