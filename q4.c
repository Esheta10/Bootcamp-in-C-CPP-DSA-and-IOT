//q4.WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
//Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.
#include<stdio.h>
int main()
{
    float Area,R;
    printf("Enter radius of circle ");
    scanf("%f",&R);
    Area=3.14 * R * R;
    printf("Area of circle is %f having the radius %f",Area,R); //area of circle sis 3.14*R*R
    return 0;
}