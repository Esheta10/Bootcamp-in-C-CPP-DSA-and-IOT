//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highestDigit(int x)
{
    int max=-1;
    while(x)
    {
        if(max<x%10)    //gives the remainder
            max=x%10;   //max is updated to the next highest value of digit
        x=x/10;         //to remove the last digit and proceed with next digit
    }
    return max;
}
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Highest digit is: "<<highestDigit(n);
    return 0;
}
/*OUTPUT-
765421198
Highest digit is: 9
*/
