//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0;
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum of all the numbers in array is: "<<sum;
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
Sum of all the numbers in array is: 55
*/