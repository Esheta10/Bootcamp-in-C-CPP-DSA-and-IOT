//7.Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the range for numbers: ");
    scanf("%d%d",&a,&b);
    for(int n=a;n<=b;n++)
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
Enter the range for numbers: 2 100
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 */
