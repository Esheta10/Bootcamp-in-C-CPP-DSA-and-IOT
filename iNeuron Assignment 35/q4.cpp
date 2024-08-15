/*4. Write a C++ Program to Swap data using function template.*/
#include<iostream>
using namespace std;
template<typename T>
void Swap(T &n1,T &n2)
{
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main()
{
    int i1=5,i2=6;
    float f1=7.8,f2=9.1;
    char c1='a',c2='b';
    cout<<"\nBefore swapping,values are: "<<"i1= "<<i1<<" i2="<<i2;
    cout<<"\nBefore swapping,values are: "<<"f1= "<<f1<<" f2="<<f2;
    cout<<"\nBefore swapping,values are: "<<"c1= "<<c1<<" c2="<<c2;

    Swap<int>(i1,i2);
    Swap<float>(f1,f2);
    Swap<char>(c1,c2);

    cout<<"\nAfter swapping,values are: "<<"i1= "<<i1<<" i2="<<i2;
    cout<<"\nAfter swapping,values are: "<<"f1= "<<f1<<" f2="<<f2;
    cout<<"\nAfter swapping,values are: "<<"c1= "<<c1<<" c2="<<c2;
    return 0;
}
/*OUTPUT-
Before swapping,values are: i1= 5 i2=6
Before swapping,values are: f1= 7.8 f2=9.1
Before swapping,values are: c1= a c2=b
After swapping,values are: i1= 6 i2=5
After swapping,values are: f1= 9.1 f2=7.8
After swapping,values are: c1= b c2=a
*/