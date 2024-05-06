//10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0,n=0,max=-999999,min=999999;

    printf("Enter array size: ");
    scanf("%d",&n);

    ptr=(int*)malloc(sizeof(int));

    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        if(max < *(ptr+i))
            max=*(ptr+i);
        if(min > *(ptr+i))
            min=*(ptr+i);
    }
    printf("Maximum is %d\nMinimum is %d\n",max,min);
    free(ptr);

    return 0;
}
/*OUTPUT-
Enter array size: 5

Enter array elements: 30 10 20 40 50
Maximum is 50
Minimum is 10
*/
