//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int next_prime(int);
int main()
{
    int num,num_next;
    printf("Enter a number: ");
    scanf("%d",&num);
    num_next=next_prime(num);
    printf("The next prime number to the given number %d is %d",num,num_next);
    return 0;
}
int next_prime(int num)
{
    for(int i=num+1;i>num;i++)
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
            return i;
    }
}
/*OUTPUT-
Enter a number: 2
The next prime number to the given number 2 is 3
Enter a number: 59
The next prime number to the given number 59 is 61
*/