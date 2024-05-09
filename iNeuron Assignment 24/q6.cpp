//6. Define a function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
int swap(int &a,int &b) //reference variable
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int x,y;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;
    cout<<"Before swapping,numbers are: "<<x<<" "<<y;
    cout<<endl;
    swap(x,y);
    cout<<"After swapping,numbers are: "<<x<<" "<<y;
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter 2 numbers: 10 20
Before swapping,numbers are: 10 20
After swapping,numbers are: 20 10
*/