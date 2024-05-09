//10. Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
int add(int x,int y)
{
    int sum=0;
    sum=x+y;
    return sum;
}
float add(float x,float y)
{
    float sum=0;
    sum=x+y;
    return sum;
}
int main()
{
    int a=49,b=51;
    float c=89.1,d=60.5;
    cout<<"Sum is: "<<add(a,b)<<endl;
    cout<<"Sum is: "<<add(c,d)<<endl;
    return 0;
}
/*OUTPUT-
Sum is: 100
Sum is: 149.6
*/