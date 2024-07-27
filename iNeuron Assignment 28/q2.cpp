/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex(){}
        void setData(int real,int imag)
        {
            this->real=real;
            this->imag=imag;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);

    c1.display();
    c2.display();
    return 0;
}
/*OUTPUT-
3 + 4i
5 + 6i
*/