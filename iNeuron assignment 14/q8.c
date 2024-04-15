//8. Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter the numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("second smallest element in array is %d",a[i-3]);//a[1]
}
/*OUTPUT-
Enter the numbers: 9 1 3 6 2
second smallest element in array is 2
*/
//---------------------------------OR------------------------------------------
#include<stdio.h>
int main()
{
    int a[5],i,j,smallest=0,s_smallest=0;
    printf("Enter the numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<smallest)
        {
            s_smallest=smallest;
            smallest=a[i];
        }
        else
        {
            if(a[i]<s_smallest)
                s_smallest=a[i];
        }
    }
    printf("Second smallest element is %d",s_smallest);
}
