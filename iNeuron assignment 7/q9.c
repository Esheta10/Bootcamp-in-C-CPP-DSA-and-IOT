//9. Write a program to check whether a given number is an Armstrong number or not.
//Armstrong number-The sum of nth power of digits is equal to the given number.eg-1,2.....,9,153,370,371,1634.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp,armstrong,count=0,sum=0;
    printf("Enter a number- ");
    scanf("%d",&n);
    temp=n;
    armstrong=n;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(armstrong==sum)
        printf("%d is an armstrong number",sum);
    else    
        printf("%d is not an armstrong number",sum);
    return 0;
}