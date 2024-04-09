//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(prime(num))
    {
        printf("%d is prime",num);
    }
    else
    {
        printf("%d is not prime",num);
    }
}
int prime(int num)
{
    int flag=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}
/*OUTPUT-
Enter a number: 72
72 is not prime
Enter a number: 73
73 is prime
*/