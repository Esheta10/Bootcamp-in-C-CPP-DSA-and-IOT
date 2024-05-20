//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Unary
{
    private:
        int a;
    public:
        void setdata(int x)
        {
            a=x;
        }
        void display()
        {
            cout<<a<<endl;
        }
        Unary operator++()
        {
            cout<<"Pre-increment operator overload"<<endl;
            Unary temp;
            temp.a=++a;
            return temp;
        }
        Unary operator++(int useless)
        {
            cout<<"Post-increment operator overload"<<endl;
            Unary temp;
            temp.a=a++;
            return temp;
        }
        Unary operator--()
        {
            cout<<"Pre-decrement operator overload"<<endl;
            Unary temp;
            temp.a=--a;
            return temp;
        }
        Unary operator--(int useless)
        {
            cout<<"Post-decrement operator overload"<<endl;
            Unary temp;
            temp.a=a--;
            return temp;
        }

};
int main()
{
    Unary u1,u2;
    u1.setdata(5);
    u2.setdata(20);
    u1.display();

    (++u1).display();
    (u1++).display();
    u1.display();
    cout<<"-------------------------------------------------"<<endl;

    u2.display();
    (--u2).display();
    (u2--).display();
    u2.display();
    cout<<"-------------------------------------------------"<<endl;

    return 0;
}
/*OUTPUT-
5
Pre-increment operator overload
6
Post-increment operator overload
6
7
-------------------------------------------------
20
Pre-decrement operator overload
19
Post-decrement operator overload
19
18
-------------------------------------------------
*/