/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
       Complex(int r,int i)
        {
            real=r;
            img=i;
        }
        friend ostream & operator<<(ostream &os,Complex &c);
        friend istream & operator>>(istream &in,Complex &c);

        void display()
        {
            cout<<"real: "<<real<<" imag: "<<img<<endl;
        }
};
istream& operator>>(istream &in,Complex &c)
{
    cout<<"Enter the real and imaginary numbers: "<<endl;
    in>>c.real>>c.img;
    return in;
}
ostream& operator<<(ostream &os,Complex &c)
{
    os<<"real: "<<c.real<<" imag:"<<c.img<<endl;
    return os;
}
int main()
{
    Complex c1(3,4),c2;
    cin>>c2;
    cout<<c1<<c2;
    
    return 0;
}
/*OUTPUT-
Enter the real and imaginary numbers: 
5 6
real: 3 imag:4
real: 5 imag:6*/