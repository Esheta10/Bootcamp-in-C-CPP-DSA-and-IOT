//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Before swapping,numbers are: "<<a<<" "<<b;
    cout<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping,numbers are: "<<a<<" "<<b;
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter 2 numbers: 100 500
Before swapping,numbers are: 100 500
After swapping,numbers are: 500 100
*/