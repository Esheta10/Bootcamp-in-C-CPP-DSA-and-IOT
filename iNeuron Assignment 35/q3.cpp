/*3. Write a C++ program to find the largest of three elements using a template.*/
#include<iostream>
using namespace std;

template<class T>
T large(T n1,T n2,T n3)
{
    if(n1>n2 && n1>n3)
        return n1;
    else if(n2>n1 && n2>n3)
        return n2;
    else
        return n3;
}
int main()
{
    int i1,i2,i3;
    float f1,f2,f3;
    char c1,c2,c3;

    cout<<"Enter 3 integers: ";
    cin>>i1>>i2>>i3;
    cout<<"Large is: "<<large(i1,i2,i3)<<endl;

    cout<<"Enter 3 floating point numbers: ";
    cin>>f1>>f2>>f3;
    cout<<"Large is: "<<large(f1,f2,f3)<<endl;

    cout<<"Enter 3 characters: ";
    cin>>c1>>c2>>c3;
    cout<<"Large is: "<<large(c1,c2,c3)<<endl;

    return 0;
}
/*OUTPUT-
Enter 3 integers: 1 2 3
Large is: 3
Enter 3 floating point numbers: 7.2 3.5 1.2
Large is: 7.2       
Enter 3 characters: a b c
Large is: c
*/