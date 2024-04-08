//4. Write a function to print first N natural numbers (TSRN).
#include<stdio.h>
void natural_numbers(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    natural_numbers(num);
    return 0;
}
void natural_numbers(int num)
{
    for(int i=1;i<=num;i++)
        printf("%d ",i);
}
/*OUTPUT-
Enter a number: 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
*/