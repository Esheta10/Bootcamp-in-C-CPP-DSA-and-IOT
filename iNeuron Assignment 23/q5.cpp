//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,volume;
    cout<<"Enter the value for length,breadth and height of cuboid:";
    cin>>l>>b>>h;
    volume=l*b*h;
    cout<<"Volume of cuboid is: "<<volume<<" cubic-metres";
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter the value for length,breadth and height of cuboid:4 5 6
Volume of cuboid is: 120 cubic-metres
*/
