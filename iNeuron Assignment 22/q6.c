//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0,n=0,max=-999999;

    printf("\nEnter the size of array: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    printf("\nEnter array elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        if(max < *(ptr+i))
            max=*(ptr+i);
    }
    printf("\nMaximum number is %d",max);
    free(ptr);

    return 0;
}
/*OUTPUT-
Enter the size of array: 5

Enter array elements: 98 12 54 100 2  

Maximum number is 100
*/
