/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/
#include<iostream>
using namespace std;
class fraction
{
    private:
        long num;
        long deno;
    public:
        fraction(long n=0,long d=0)
        {
            num=n;
            deno=d;
        }
        fraction operator++()
        {
            fraction temp;
            temp.num=++num;
            temp.deno=++deno;
            return temp;
        }
        fraction operator++(int dummy)
        {
            fraction temp;
            temp.num=num++;
            temp.deno=deno++;
            return temp;
        }
        friend void operator<<(ostream &os,fraction &f);
        friend void operator>>(istream &in, fraction&f);
};
void operator>>(istream &in,fraction &f)
{
    cout<<"Numerator:";
    in>>f.num;
    cout<<"Denominator: ";
    in>>f.deno;
}
void operator<<(ostream &os,fraction &f)
{
    os<<f.num<<"/"<<f.deno<<endl;
}
int main()
{
    fraction f1,f2;
    cout<<"f1: "<<f1;
    cout<<"f2: "<<f2;

    cout<<"Enter first fraction: "<<endl;
    cin>>f1;
    cout<<"Fraction is:"<<f1;
    cout<<endl;

    ++f1;
    cout<<"++f1: "<<f1;
    cout<<endl;

    f1++;
    cout<<"f1++: "<<f1;

    cout<<"\nEnter second fraction: "<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f2=++f1 : "<<endl;
    cout<<"f1: "<<f1;
    cout<<"f2: "<<f2;
    cout<<endl;

    f2=f1++;
    cout<<"f2=f1++ : "<<endl;
    cout<<"f1: "<<f1;
    cout<<"f2: "<<f2;
    cout<<endl;

    return 0;    
}
/*OUTPUT-
f1: 0/0
f2: 0/0
Enter first fraction: 
Numerator:1
Denominator: 2
Fraction is:1/2        

++f1: 2/3

f1++: 3/4

Enter second fraction: 
Numerator:2
Denominator: 4
f2=++f1 :
f1: 4/5
f2: 4/5

f2=f1++ :
f1: 5/6
f2: 4/5
*/
