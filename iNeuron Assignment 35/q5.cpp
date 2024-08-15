/*5. Write a C++ Program to Add two numbers using function template.*/
#include<iostream>
using namespace std;

template<class T>
T add(T n1,T n2)
{
    return(n1+n2);
}
int main()
{
    int i1=2,i2=3;
    cout<<"Addition of two integers: "<<add<int>(i1,i2);

    return 0;
}
/*OUTPUT-
Addition of two integers: 5
*/