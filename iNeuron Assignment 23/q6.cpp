//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    avg = (a+b+c)/3.0;
    cout<<"Average of 3 numbers is: "<<avg;
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter 3 numbers: 40 50 60
Average of 3 numbers is: 50
*/