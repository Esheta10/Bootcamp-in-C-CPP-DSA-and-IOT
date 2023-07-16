//7.**********        
//  ****  ****        
//  ***    ***        
//  **      **        
//  *        *    
#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=0;i<10;i++)
    {
    count=0;
    for(j=0;j<=(4-i);j++)
        printf("*",++count);
    for(j=0;j<2*i;j++)
        printf(" ");
    while(count)
        printf("*",count--);
    printf("\n");
    }
}