//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int pow(int x,int y)
{
    int a = 1;
    while(y--)
    {
        a=a*x;
    }
    return a;
}
int main()
{
    int x,y;
    cout<<"Enter a number and its power: "<<endl;
    cin>>x>>y;
    cout<<"The output is: "<<pow(x,y);
    cout<<endl;
    return 0;
}
/*OUTPUT-
Enter a number and its power: 
4 3
The output is: 64
*/