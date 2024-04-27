//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    char a[]="Esheta10*$@#";
    int alpha_count=0,digit_count=0,char_count=0;
    int i=0;
    while(a[i] != '\0')
    {
        if((a[i] >='a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            alpha_count++;
        else if(a[i] >='0' && a[i]<='9')
            digit_count++;
        else
            char_count++;

        i++;
    } 
    printf("Alphabet count=%d,Digit count=%d and Special characters count=%d",alpha_count,digit_count,char_count);
    return 0;
}
/*OUTPUT-
Alphabet count=6,Digit count=2 and Special characters count=4
*/