//8. Write a program to demonstrate dangling pointers in C.
//Dangling pointer:A pointer that points to a memory location that has been deleted.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("Before free: %d\n",*ptr);

    free(ptr);

    printf("After free: %d\n",*ptr);

    return 0;
}
/*OUTPUT-
Before free: 10     
After free: 14099000
*/