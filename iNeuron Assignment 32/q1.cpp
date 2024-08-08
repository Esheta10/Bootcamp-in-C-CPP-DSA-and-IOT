/*1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/
#include<iostream>
using namespace std;
class FLOAT
{
    public:
        float x;
    public:
        void setData(float a)
        {
            x=a;
        }
        void getData()
        {
            cout<<"x: "<<x<<endl;
        }
       FLOAT operator+(FLOAT c)    //defining an operator function '+' to overload
        {
            FLOAT temp;
            temp.x=x+c.x;
            return temp;
        }
       FLOAT operator-(FLOAT c)     //defining an operator function '-' to overload
        {
           FLOAT temp;
            temp.x=x-c.x;
            return temp;
        }
       FLOAT operator*(FLOAT c)     //defining an operator function '*' to overload
        {
            FLOAT temp;
            temp.x=x*c.x;
            return temp;
        }
       FLOAT operator/(FLOAT c)     //defining an operator function '/' to overload
        {
            FLOAT temp;
            temp.x=x/c.x;
            return temp;
        }
};
int main()
{
   FLOAT c1,c2,c3,c4,c5,c6;
    c1.setData(10.5);
    c2.setData(20);

    c3=c1+c2;
    c3.getData();

    c4=c1-c2;
    c4.getData();

    c5=c1*c2;
    c5.getData();

    c6=c1/c2;
    c6.getData();

    return 0;
}
/*output-
x: 30.5 
x: -9.5 
x: 210  
x: 0.525
*/