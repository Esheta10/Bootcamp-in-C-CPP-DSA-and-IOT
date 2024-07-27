/*6. Create a complex class and overload assignment operator for that class.*/
#include<iostream>
using  namespace std;
class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex()
        {}
        void setData(int real,int imag)
        {
            this->real=real;
            this->imag=imag;
        }
        void display()
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        Complex & operator=(Complex &c)
        {
            this->real=c.real;
            this->imag=c.imag;
            return *this;
        }

};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);

    c2=c1;

    c1.display();
    c2.display();

    return 0;
}
/*OUTPUT-
3+4i
3+4i
*/