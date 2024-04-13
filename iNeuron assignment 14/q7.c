//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter the numbers: ");
    for(i=0;i<=4;i++)
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
    printf("Second largest element in array is %d",a[i-1]);//a[3]
}
/*OUTPUT-
Enter the numbers: 987 234 1 678 1000
Second largest element in array is 987
*/
