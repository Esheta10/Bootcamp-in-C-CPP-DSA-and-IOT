//1. Define a class Complex to represent a complex number with instance variables a and
//b to store real and imaginary parts. Also define following member functions
//a. void setData(int,int)
//b. void showData()
//c. Complex add(Complex)
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
        void setN(int r,int i)
        {
            real=r;
            imag=i;
        }
        void show_data()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }
        

};
int main()
{
    Complex c1,c2,c3;
    c1.setN(4,5);
    c2.setN(6,7);

    c1.show_data();
    c2.show_data();

    c3=c1.add(c2);
    c3.show_data();
}
/*OUTPUT-
4 + 5i
6 + 7i
10 + 12i
*/