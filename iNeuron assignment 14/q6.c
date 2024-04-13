//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)//qki last element ko kisi se compare nahi karna hai
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];  //
                a[i]=a[j];  // swap function
                a[j]=temp;  //
            }
        }
    }
    printf("After sorting elements are: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
/*OUTPUT-
Enter 10 numbers: 12 23 45 67 98 10 156 345 1 234
After sorting elements are: 1 10 12 23 45 67 98 156 234 345    
*/