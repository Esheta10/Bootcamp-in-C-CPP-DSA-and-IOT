/*10. Given an integer array nums , return an array answer such that answer[i] is equal to
the product of all the elements of nums except nums[i] .*/
#include<iostream>
#include<cmath>
using namespace std;
int divide(int dividend,int divisor)
{
    if(dividend==0)
        return 0;
    if(divisor==0)
    {
        cout<<"\nDivision by zero is impossible\n";
        return 0;
    }
    int sign=(dividend<0)^(divisor<0);
    dividend=abs(dividend);
    divisor=abs(divisor);
    if(divisor==1)
        return((sign==0) ? dividend : -dividend);
    int ans=exp(log(dividend)-log(divisor)) + 0.0000000001;
        return ((sign==0) ? ans : -ans);
}
int main()
{
    int num[]={1,2,3,4};
    int ans[10],size=4,countZero=0,mul=1;

    for(int i=0;i<size;i++)
    {
        if(num[i]==0)
            countZero++;
        else    
            mul=num[i]*mul;
    }

    for(int i=0;i<size;i++)
    {
        if(countZero > 1)
            ans[i] = 0;
        else if(countZero == 1)
        {
            if(num[i] != 0)
                ans[i] = 0;
            else
                ans[i]=mul;
        }
        else
            ans[i] = divide(mul,num[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
/*OUTPUT-
24 12 8 6 
*/