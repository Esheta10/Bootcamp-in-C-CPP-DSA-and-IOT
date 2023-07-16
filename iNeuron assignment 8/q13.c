//13.
//ABCDEFGFEDCBA
//ABCDEF FEDCBA
//ABCDE   EDCBA
//ABCD     DCBA
//ABC       CBA
//AB         BA
//A           A
#include<stdio.h>
int main()
{
    int i,j;
    char k='@';
    for(i=0;i<=6;i++)
    {
        k='@';
        for(j=0;j<=(6-i);j++)
            printf("%c",++k);
        for(j=0;j<(2*i-1);j++)
            printf(" ");
        if(i=='@')
            k--;
        while(k!='@')
            printf("%c",k--);
        printf("\n");
    }
}