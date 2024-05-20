/*5. Consider following class Numbers
class Numbers

{
int x,y,z;
public:
// methods

};
Overload the operator unary minus (-) to negate the numbers.*/
#include<iostream>
using namespace std;
class Numbers
{
    private:
        int x,y,z;
    public:
        void setdata(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void display()
        {
            cout<<x<<" "<<y<<" "<<z;
           
        }
        void operator-()//unary operator overload //We do not need to pass any argument while overloading unary operator
        {
            x = -x;
            y = -y;
            z = -z;
        }

};
int main()
{
    Numbers n1;
    n1.setdata(10,11,12);
    cout<<"The numbers are: "<<endl;
    n1.display();
    cout<<endl;

    -n1;
    cout<<"The negated numbers are: "<<endl;
    n1.display();

    return 0;
}
/*OUTPUT-
The numbers are: 
10 11 12
The negated numbers are:
-10 -11 -12
*/