//3. Write a program to count vowels in a given string.
#include<stdio.h>
int main()
{
    char a[]="Eshetaaeiou";
    int i=0,count=0;
    while(a[i] != '\0')
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            count++;
        }
        i++;
    }
    printf("Count of vowels in the given string id %d",count);
    return 0;
}
/*OUTPUT-
Count of vowels in the given string id 8
*/