//10. Write a recursive function to print reverse of a given number.
#include<stdio.h>
int rem,sum=0; //global declaration of variable
void reverse_num(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse_num(n);
    return 0;
}
void reverse_num(int n)
{
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        reverse_num(n/10);
    }
    else    
        printf("Reverse is %d",sum);
}
/*OUTPUT-
Enter a number: 54678
Reverse is 87645
*/