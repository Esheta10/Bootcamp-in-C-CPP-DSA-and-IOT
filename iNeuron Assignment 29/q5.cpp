/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}*/
#include<iostream>
using namespace std;
class Invent1
{
    private:
        int x;
        int y;
    public:
        Invent1(int a,int b)
        {
            x=a;
            y=b;
        }
        operator float()
        {
            return (x*y);
        }

};
class Invent2
{
    private:
        int s;
        int t;
    public:
        Invent2(){}
        Invent2(int c,int d)
        {
            s=c;
            t=d;
        }
        Invent2(Invent1 i)
        {
            s=i;
            t=i;
        }
         void display()
        {
            cout<<"s = "<<s<<" t = "<<t<<endl;
        }
        
};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;//Invent1 to float
    cout<<"tv = "<<tv<<endl;

    d1=s1;// Invent1 to Invent2 can be converted using parameterized constructor Invent2(Invent1) as well as by overloading Invent1 operator
    d1.display();

    return 0;
}
/*OUTPUT-
tv = 20
s = 20 t = 20
*/

