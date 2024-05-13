//1. Define a class Complex to represent a complex number. Declare instance member
//variables to store real and imaginary part of a complex number, also define instance
//member functions to set values of complex number and print values of complex
//number.
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
        void setData(int r,int i)
        {
            real=r;
            imag=i;
        }
        void print()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);

    c1.print();
    c2.print();

    return 0;
}
/*OUTPUT-
3 + 4i
5 + 6i
*/