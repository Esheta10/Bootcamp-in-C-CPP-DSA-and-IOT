//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
    public:
        double side;
        double volume()
        {
            return side*side*side;
        }
                Cube(double side1)
                {
                    cout<<"A constructor is called"<<endl;
                    side=side1;
                }
                Cube()
                {
                    cout<<"A default constructor is called"<<endl;
                }
                ~Cube()
                {
                    cout<<"Destructing "<<side<<endl;
                }
};
int main()
{
    Cube c1(5.25);
    Cube c2;

    cout<<"The side of 1st cube is: "<<c1.side<<endl;
    cout<<"The volume of 1st cube is: "<<c1.volume()<<endl;

    cout<<"The side of second cube is: "<<endl;
    cin>>c2.side;
    cout<<"The volume of second cube is: "<<c2.volume()<<endl;

    return 0;
}
/*OUTPUT-
A constructor is called
A default constructor is called
The side of 1st cube is: 5.25
The volume of 1st cube is: 144.703
The side of second cube is:
6.25
The volume of second cube is: 244.141
Destructing 6.25
Destructing 5.25
*/