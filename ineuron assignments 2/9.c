//9.Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;
    printf("Size of int is %d",sizeof(i));
    printf("\nSize of float is %d",sizeof(f));
    printf("\nSize of char is %d",sizeof(c));
    printf("\nSize of double is %d",sizeof(d));
    return 0;
}