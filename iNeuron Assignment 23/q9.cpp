//9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    max=a>b ? a : b;
    cout<<"Maximum of 2 numbers is: "<<max;
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter 2 numbers: 10 1000
Maximum of 2 numbers is: 1000
*/