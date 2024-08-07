//6.Write a program to print all Prime numbers under 100.
//Prime number-->any no. divisible by 1 and itself.eg-2,3,5,7,...
//to find prime numbers in range, let min=1 and max=given range
#include<stdio.h>
#include<stdio.h>
int main()
{
    int n;
    for(int n=1;n<=100;n++)
    {
        int flag=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
         if(flag==0)
            printf("%d ",n);
    }
    return 0;
}
/*output-
1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97  */
