//1. Define a function to check whether a given number is a Prime numberint prime()or not.
#include<iostream>
using namespace std;
int prime(int n)
{
    int flag=0;
    for(int i=2;i<=n/2;i++)//We start checking for divisibility from 2 because every number is divisible by 1,
                           // so checking from 2 onward is sufficient for prime checking.
    {
        if(n%i==0)
        {
             flag=1;
             break;
        }
    }
    return flag;
}
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(prime(x)==0)
        cout<<"Prime number";
    else    
        cout<<"Not prime";
    return 0;
}
/*OUTPUT-
Enter a number: 15
Not prime
Enter a number: 7
Prime number
*/