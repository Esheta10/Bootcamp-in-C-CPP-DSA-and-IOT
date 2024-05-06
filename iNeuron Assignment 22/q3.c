//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0,n=0,sum=0;

    printf("\nEnter size of array: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("\nMemory allocation failed");
    }
    printf("\nThe entered array elements are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\nSum is %d",sum);
    free(ptr);

    return 0;
}
/*OUTPUT-
Enter size of array: 10

The entered array elements are: 1 2 3 4 5 6 7 8 9 10

Sum is 55
*/