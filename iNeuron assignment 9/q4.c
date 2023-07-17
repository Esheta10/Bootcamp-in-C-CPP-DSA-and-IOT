/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
 while(1)
 {
    int n,a,b,c;
    printf("\n1.Isosceles triangle\n2.Right angled triangle\n3.Equilateral triangle\n4.Exit\n");
    printf("Enter your choice- ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Enter the value of 3 sides- ");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b || b==c ||c==a)
                    printf("Isoscles triangle");
                else
                    printf("Not an isoscles triangle");
                break;
        case 2: printf("Enter the value of 3 sides- ");
                scanf("%d%d%d",&a,&b,&c);
                if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                    printf("Right angle triangle");
                else
                    printf("Not a right angle triangle");
                break;
        case 3: printf("Enter the value of 3 sides- ");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b && b==c)
                    printf("Equilateral triangle");
                else
                    printf("Not an equilateral triangle");
                break;
        case 4: exit(0);
    }
 }
}
    