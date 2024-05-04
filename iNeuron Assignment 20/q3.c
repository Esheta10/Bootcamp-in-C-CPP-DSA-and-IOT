//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *ptr,int size)
{
    for(int i=0;i<=size-1;i++)//i will iterate from 0 to 9
    {
        for(int j=i+1;j<size;j++)//j will iterate from 1 to 9
        {
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];//*(ptr+i)
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
int main()
{
    int a[]={2,44,62,1,5,56,8,4,23,6};
    sort(a,10); //sort(base address=&a[0],size) or sort(start,end)

    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
/*OUTPUT-
1 2 4 5 6 8 23 44 56 62
*/