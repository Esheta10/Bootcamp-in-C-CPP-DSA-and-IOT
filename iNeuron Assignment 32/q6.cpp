/*6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.*/
#include<bits/stdc++.h>
using namespace std;

class A
{
    public :
        A()
        {
            cout<<"A"<<endl;
        }
};
class B: public A
{
    public:
        B():A()
        {
            cout<<"B"<<endl;
        }
};
class C: public B
{
    public:
        C():B()
        {
            cout<<"C"<<endl;
        }
};
int main()
{
    C c;
    return 0;
}
/*OUTPUT-
A
B
C
*/