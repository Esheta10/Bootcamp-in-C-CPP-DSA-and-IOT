//1.Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area_of_circle(float);
int main()
{
    float r;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    printf("Area of circle is %.2f",area_of_circle(r));
    return 0;
}
float area_of_circle(float r)
{
    float s= 3.14*r*r;
    return s;    
}
/*OUTPUT:
Enter the value of radius: 10
Area of circle is 314.00
*/