//7. Write a program to demonstrate memory leak in C.
//memory leak:apne memory allocate karwayi but usko free nahi kiya
//memory hai but usko point karne wala koi pointer nahi hai
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    ptr=(int*)malloc(sizeof(int));
    ptr=NULL;

    return 0;
}
/*OUTPUT-
In summary, this program dynamically allocates memory for an integer pointer but immediately sets the pointer to NULL,
 resulting in a memory leak because the allocated memory is lost without being freed.
*/