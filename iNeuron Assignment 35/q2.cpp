/*2. Write a C++ Program to find Largest among two numbers using function template.*/
#include<iostream>
using namespace std;

template<class T>
T large(T n1,T n2)
{
    return (n1>n2) ? n1 : n2;
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;

    cout<<"Enter 2 integers: ";
    cin>>i1>>i2;
    cout<<"Large is: "<<large(i1,i2)<<endl;

    cout<<"Enter two floating point numbers: ";
    cin>>f1>>f2;
    cout<<"Large is: "<<large(f1,f2)<<endl;

    cout<<"Enter two characters: ";
    cin>>c1>>c2;
    cout<<"Large is: "<<large(c1,c2)<<endl;

    return 0;
}
/*OUTPUT-
Enter 2 integers: 4 5
Large is: 5
Enter two floating point numbers: 7.8 9.1
Large is: 9.1
Enter two characters: e s
Large is: s
*/