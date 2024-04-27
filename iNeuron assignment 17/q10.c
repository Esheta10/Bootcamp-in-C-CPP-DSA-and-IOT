//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="esheta";
    int freq[150]={0};
    int i=0;
    while(a[i] != '\0')
    {
        freq[a[i]]++;
        i++;
    }
    for(i=0;i<150;i++)  //frequency array
    {
        if(freq[i] != 0)
            printf("%c --> %d\n",i,freq[i]);
    }
}
/*OUTPUT-
a --> 1
e --> 2
h --> 1
s --> 1
t --> 1
*/
