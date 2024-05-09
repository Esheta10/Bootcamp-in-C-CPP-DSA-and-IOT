//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int area(int x,int y)
{
    return x*y;
}
float area(float b,float h)
{
    return 0.5*b*h;
}
int main()
{
    int x,y,r;
    float b,h;
    cout<<"Enter radius of circle: "<<endl;;
    cin>>r;
    cout<<"Enter length and breadth of rectangle: "<<endl;;
    cin>>x>>y;
    cout<<"Enter base and height of traingle: "<<endl;;
    cin>>b>>h;
    cout<<"Area of circle is : "<<area(r)<<endl;
    cout<<"Area of rectangle is: "<<area(x,y)<<endl;
    cout<<"Area of triangle is: "<<area(b,h)<<endl;

    return 0;
}
/*OUTPUT-
Enter radius of circle: 
7
Enter length and breadth of rectangle: 
4 5
Enter base and height of traingle: 
4 10
Area of circle is : 153.86
Area of rectangle is: 20  
Area of triangle is: 20  
*/