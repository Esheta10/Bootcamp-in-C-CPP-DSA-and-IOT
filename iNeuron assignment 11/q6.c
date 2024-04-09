//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime_btw_two_numbers(int,int);
int main()
{
    int n1,n2;
    printf("Enter two numbers to print all prime numbers between them: ");
    scanf("%d%d",&n1,&n2);
    prime_btw_two_numbers(n1,n2);
    return 0;
}
void prime_btw_two_numbers(int n1,int n2)
{
    printf("Prime numbers between %d and %d are: ",n1,n2);

    for(int i=n1+1;i<n2;i++)
    {
        int k=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                k++;
                break;
            }
        }
        if(k==0)
            printf("%d ",i);
    }
}
/*OUTPUT-
Enter two numbers to print all prime numbers between them: 1 20
Prime numbers between 1 and 20 are: 2 3 5 7 11 13 17 19  
*/