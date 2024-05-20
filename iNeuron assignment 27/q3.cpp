//3. Write a C++ program to add two complex numbers using operator overload by a friend function.
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
        void setdata(int r,int i)
        {
            real=r;
            imag=i;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);

    c1.display();
    c2.display();

    c3=c1+c2;
    cout<<"Sum is: "<<endl;
    c3.display();

    return 0;
}
/*OUTPUT-
3 + 4i
5 + 6i
Sum is:
8 + 10i
*/