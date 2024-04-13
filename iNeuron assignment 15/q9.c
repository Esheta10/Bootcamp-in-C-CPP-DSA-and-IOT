//9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10};
    int c[10],i=0,j=0,k=0;

    for(k=0;k<10;k++)
    {
        if (i>=5)
        {
            while(k<10)
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==10)
                    break;
            }
        }
        else if(j>=5)
        {
            while(k<10)
            {
                c[k]=a[i];
                i++;
                k++;
                if(k==10)
                    break;
            }
        }
        else if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    printf("Merged array is: ");
    for(k=0;k<10;k++)
    {
        printf("%d ",c[k]);
    }
    return 0;
}
/*OUTPUT-
Merged array is: 1 2 3 4 5 6 7 8 9 10
*/