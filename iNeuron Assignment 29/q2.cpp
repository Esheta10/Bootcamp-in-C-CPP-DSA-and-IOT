/*2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex(){}
        void setData(int r,int i)
        {
            real=r;
            imag=i;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        operator long()
        {
            cout<<"long() called"<<endl;
            return (real + imag);
        }
        explicit operator int()//This will be called when we explicitly mention to call int ()-----> x=(int)c otherwise compiler will normally prefer long() 
        {
             cout<<"int() called"<<endl;
            return (real + imag);
        }
};
int  main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x=c1;       //USER-DEFINED TO PRE-DEFINED
    cout<<"x = "<<x<<endl;
    return 0;
}
/*OUTPUT-
long() called
x = 7
*/
