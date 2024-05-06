//2. Write a program to ask the user to input a number of data values he would like to
//enter then create an array dynamically to accommodate the data values. Now take
//the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i=0,size=0,sum=0;

    printf("\nEnter size of array: ");
    scanf("%d",&size);

    ptr=(int *)calloc(size,sizeof(int));
    /*This line dynamically allocates memory for an array of integers using the calloc function. 
    It allocates memory for size elements, each of size sizeof(int) bytes, 
    and assigns the pointer ptr to the allocated memory.
    */

    if(ptr==NULL)
    {
        printf("\nMemory allocation failed");
    }

    printf("The entered %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<size;i++)
    {
        sum = sum + *(ptr+i);
    }
    printf("Average is %d",sum/size);
    free(ptr);

    return 0;
}
/*OUTPUT-
Enter size of array: 5
The entered 5 values
1 2 3 4 5
Average is 3
*/