//4. Write a C++ program to calculate the area of a circle.
#include<iostream>
using namespace std;
int main()
{
    float r,area;
    cout<<"Enter the value of radius: ";
    cin>>r;
    area=3.14*r*r;
    cout<<"Area of circle is: "<<area;
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter the value of radius: 7
Area of circle is: 153.86
*/
