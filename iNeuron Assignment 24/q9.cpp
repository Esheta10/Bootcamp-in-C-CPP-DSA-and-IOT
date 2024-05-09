//9. Write functions using function overloading to find a maximum of two numbers and
//both the numbers can be integer or real.
#include<iostream>
using namespace std;
int max(int x,int y)
{
    return x>y?x:y;
}
float max(float x,float y)
{
    return x>y?x:y;
}
int main()
{
    int x,y;
    float a,b;
    cout<<"Enter 2 integer numbers: ";
    cin>>x>>y;
    cout<<"Maximum of the two numbers is: "<<max(x,y)<<endl;
    cout<<"Enter 2 real numbers: ";
    cin>>a>>b;
    cout<<"Maximum of the two numbers is: "<<max(a,b)<<endl;
    return 0;
}
/*OUTPUT-
Enter 2 integer numbers: 10  50
Maximum of the two numbers is: 50
Enter 2 real numbers: 30.5 60.9
Maximum of the two numbers is: 60.9
*/