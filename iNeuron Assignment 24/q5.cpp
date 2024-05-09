//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int fib(int n)
{
    int f1=1,f2=1,temp;
    if(n<=2)
        return 1;
    for(int i=3;i<=n;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }
    return f2;
}
int main()
{
    int n,flag=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; ;i++)  //infinite loop
    {
        int value=fib(i);
        cout<<value<<" ";
        if(value==n)
        {
            flag=1;
            break;
        }
        if(value>n)
            break;   
    }
    cout<<endl;
    if(flag==1)
        cout<<"Given number is a fibonacci number";
    else
        cout<<"Not fibonacci";
    return 0;
}
/*OUTPUT-
Enter a number: 8
1 1 2 3 5 8 
Given number is a fibonacci number
Enter a number: 20
1 1 2 3 5 8 13 21 
Not fibonacci
*/