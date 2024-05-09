//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)//default argument
{
    return a+b+c;
}
int main()
{
    cout<<"Addition of 2 numbers is: "<<add(10,20)<<endl;
    cout<<"Addition of 3 numbers is: "<<add(10,20,30);
    cout<<endl;
    return 0;
}
/*OUTPUT-
Addition of 2 numbers is: 30
Addition of 3 numbers is: 60
*/