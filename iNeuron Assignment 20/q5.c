//5. Write a program to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    
    if(*p>*q)
        printf("%d is maximum number between %d and %d",*p,a,b);
    else
        printf("%d is maximum number between %d and %d",*q,a,b);
}
/*OUTPUT-
Enter 2 numbers: 1000 1
1000 is maximum number between 1000 and 1
*/