/*Given an integer x , return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n,rem,rev=0;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n)
        cout<<n<<" is a palindrome "<<endl;
    else
        cout<<n<<" is not a palindrome "<<endl;

        return 0;
}
/*OUTPUT-
Enter a number: 121
121 is a palindrome

Enter a number: 1234
1234 is not a palindrome
*/