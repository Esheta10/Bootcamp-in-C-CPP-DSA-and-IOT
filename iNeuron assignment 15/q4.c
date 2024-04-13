//4. Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<Stdio.h>
int main()
{
    int a[5]={32,29,40,12,70};
    int d=3;
    while(d!=0)
    {
        int temp=a[4];
        for(int i=4;i>=0;i--)
        {
            a[i]=a[i-1];    
        }
        a[0]=temp;
        d--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
/*OUTPUT-
40 12 70 32 29
 */
