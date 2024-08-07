//8.Write a program to find next Prime number of a given number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int j=n+1;j<=100;j++)
    {
        int flag=0;
        for(int i=2;i<=sqrt(j);i++)
        {
            if(j%i == 0 )
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("Next prime number is :%d\n",j);
            break;
        }
    }
    return 0;
}
/*output-
Enter a number: 34
Next prime number is :37  */
