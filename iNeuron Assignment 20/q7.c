//7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
int main()
{
    int vowel_count=0,consonant_count=0;
    char str[100];
    char *p;
    p=str;//to point to the first character of the string

    printf("Enter the string:");
    fgets(str,100,stdin);

    for(int i=0;p[i];i++)
    {
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U')
            vowel_count++;
        if((p[i]>='a'&& p[i]<='z') || (p[i]>='A'&& p[i]<='Z'))
        {
           if(p[i]!='a'&& p[i]!='e'&& p[i]!='i'&& p[i]!='o'&& p[i]!='u'&& p[i]!='A'&& p[i]!='E'&& p[i]!='I'&& p[i]!='O'&& p[i]!='U')
                consonant_count++;
        }
    }
    printf("Vowel count=%d\nConsonant count=%d\n",vowel_count,consonant_count);
    return 0;
}
/*OUTPUT-
Enter the string:Esheta Jaiswal
Vowel count=6
Consonant count=7
*/