/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
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
        Complex(int x)
        {
            real=x;
            imag=x;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};
int  main()
{
    Complex c1;
    int x=5;
    c1=x;   //PRE-DEFINED TO USER-DEFINED
    c1.display();
    return 0;
}
/*OUTPUT-
5 + 5i
*/