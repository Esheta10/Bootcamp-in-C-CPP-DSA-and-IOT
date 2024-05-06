//9. Write a program to allocate memory dynamically of the size in bytes entered by the user.
// Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0,n=0,sum=0;

    printf("Enter size of array: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
        printf("\nMemory allocation failed");

    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        sum = sum + *(ptr+i);
    }
    printf("\nSum is %d",sum);
    free(ptr);

    return 0;
}
/*OUTPUT-
Enter size of array: 5

Enter array elements: 10 11 12 13 14

Sum is 60
*/
