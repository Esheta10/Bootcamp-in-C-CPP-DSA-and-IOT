//5. Write a program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,i=0,sum=0;
    int *ptr;

    printf("\nEnter size of array: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    printf("\nThe entered array elements are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum + *(ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\nSum is %d",sum);
    free(ptr);

    return 0;
}
/*OUTPUT-
Enter size of array: 5

The entered array elements are: 10 20 30 40 50
10 20 30 40 50 
Sum is 150
*/