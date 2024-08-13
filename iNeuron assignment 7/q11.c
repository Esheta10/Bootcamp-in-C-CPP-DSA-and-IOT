//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        if(n&1==1)
            break;
        else
            n=n>>1;
    }
    printf("Position of first LSB is : %d ",count);
    return 0;
}
/*OUTPUT-
Enter a number: 12
Position of first LSB is : 3 
*/