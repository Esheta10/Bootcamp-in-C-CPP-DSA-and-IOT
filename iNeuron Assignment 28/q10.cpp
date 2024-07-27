/*10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/
#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        int inches;
    public:
        Distance(){}
        Distance(int x,int y)
        {
            feet=x;
            inches=y;
        }
        Distance operator()(int a,int b,int c)
        {
            Distance d;
            d.feet=a+c+5;
            d.inches=a+b+15;
            return d;
        }
        void display()
        {
            cout<<"Feet: "<<feet<<" Inches: "<<inches<<endl;
        }
};
int main()
{
    Distance d1(5,10);
    d1.display();

    Distance d2;
    d2=d1(10,20,30);    //overloading () operator
    d2.display();
    
    return 0;
}
/*OUTPUT-
Feet: 5 Inches: 10
Feet: 45 Inches: 45
*/