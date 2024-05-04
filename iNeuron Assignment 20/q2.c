//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
void swap(char **x,char **y);//This function takes two pointers to pointers to characters (char **x and char **y) as arguments.
int main()
{
    char *a="esheta";   //single-level of indirection
    char *b="jaiswal";
    swap(&a,&b);
    printf("After swapping: %s %s",a,b);
    return 0;
}
void swap(char **x,char **y)    //second-level of indirection
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
/*OUTPUT-
After swapping: jaiswal esheta
*/
