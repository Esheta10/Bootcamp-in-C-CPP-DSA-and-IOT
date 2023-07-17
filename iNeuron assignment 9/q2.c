/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
     char n;
     int a,b;
     printf("\na.Addition\nb.Substraction\nc.Multiplication\nd.Division\ne.Exit\n");
     printf("Enter your choice- ");
     scanf("%c",&n);
        switch(n)
        {
        case'a': 
            printf("Enter 2 numbers- ");
            scanf("%d%d",&a,&b);
            printf("\nSum is %d",a+b);
            break;
        case 'b':
            printf("Enter 2 numbers- ");
            scanf("%d%d",&a,&b);
            printf("\nDifference is %d",a-b);
            break;
        case 'c':
            printf("Enter 2 numbers- ");
            scanf("%d%d",&a,&b);
            printf("\nProduct is %d",a*b);
        break;
            case 'd':
            printf("Enter 2 numbers- ");
            scanf("%d%d",&a,&b);
            printf("\nQuotient is %d",a/b);
            break;
        case 'e': exit(0);
              
        default : printf("Invalid choicess\n");           
        }
}