//11.
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA
#include<stdio.h>
int main()
{
    int i,j;
    char k='@';
    for(i=0;i<=4;i++)
    {
        k='@';
        for(j=0;j<=(4-i);j++)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("%c",++k);
            k--;
        while(k!='@')
            printf("%c",k--);
        printf("\n");
    }
}