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
//-------------------------------------OR---------------------------------
/*
#include<stdio.h>
int main()
{
    int n,a[10],largest=0,s_largest=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    largest=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            s_largest=largest;
            largest=a[i];
        }
        else
        {
            if(a[i]>s_largest)
                s_largest=a[i];
        }
    }
    printf("Second largest element is %d",s_largest);
}
OUTPUT-
Enter the size of array: 4
Enter array elements: 6 2 1 9
Second largest element is 6
*/
