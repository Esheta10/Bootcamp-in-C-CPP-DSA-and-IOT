//12.
// ABCDCBA
//  ABCBA 
//   ABA  
//    A   
#include<stdio.h>
int main()
{
    int i,j;
    char k='@';
    for(i=0;i<=3;i++)
    {
        k='@';
        for(j=0;j<=i;j++)
            printf(" ");
        for(j=0;j<=3-i;j++)
            printf("%c",++k);
        k--;
        while(k!='@')
            printf("%c",k--);
        printf("\n");
        
    }
}