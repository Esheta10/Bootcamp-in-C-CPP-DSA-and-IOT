//1. Define a class Complex with appropriate instance variables and member functions.
//Define following operators in the class:
//a. +
//b. -
//c. *
//d. ==
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
        Complex operator+(Complex c)
        {
            cout<<"Operator + overload"<<endl;
            Complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }
        Complex operator-(Complex c)
        {
            cout<<"Operator - overload"<<endl;
            Complex temp;
            temp.real=real-c.real;
            temp.imag=imag-c.imag;
            return temp;
        }
        Complex operator*(Complex c)
        {
            cout<<"Operator * overload"<<endl;
            Complex temp;
            temp.real=real*c.real;
            temp.imag=imag*c.imag;
            return temp;
        }
        friend bool operator==(Complex c1,Complex c2);
};
bool operator==(Complex c1,Complex c2)
{
    cout<<"Operator == overload"<<endl;
    if(c1.real==c2.real && c1.imag==c2.imag)
        return true;
    else    
        return false;
}
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setdata(60,80);
    c2.setdata(20,40);
    c1.display();
    c2.display();

    c3=c1 + c2;
    c3.display();

    c4=c1 - c2;
    c4.display();

    c5= c1 * c2;
    c5.display();

    if(c1==c2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not equal"<<endl;

    return 0;
}
/*OUTPUT-
60 + 80i
20 + 40i
Operator + overload
80 + 120i
Operator - overload
40 + 40i
Operator * overload
1200 + 3200i
Operator == overload
Not equal
*/