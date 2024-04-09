//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void first_n_prime(int);
int main()
{
    int n;
    printf("Enter the value of n to print first n prime numbers: ");
    scanf("%d",&n);
    first_n_prime(n);
    return 0;
}
void first_n_prime(int n)
{
    int count=1;
    printf("The first %d prime numbers are: ",n);
    for(int i=2;i<n;i++)
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
        {
            printf("%d ", i);
            count++;
        }
    }
}
/*OUTPUT-
Enter the value of n to print first n prime numbers: 20
The first 20 prime numbers are: 2 3 5 7 11 13 17 19
*/