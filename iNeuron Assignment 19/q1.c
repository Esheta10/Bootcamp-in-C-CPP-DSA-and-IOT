//1. Write a program to find the number of vowels in each of the 5 strings stored in two
//dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20];/// Array to store 5 strings of maximum length 20
    int i,j,vowel=0;

    for(i=0;i<5;i++)
    {
        printf("Enter %d string: ",i+1);
        fgets(a[i],20,stdin);//fgets prints from next line
    }
    for(i=0;i<5;i++)//string
    {
        for(j=0;a[i][j]!='\0';j++)//character
        {
            if(a[i][j]=='a'|| a[i][j]=='e'|| a[i][j]=='i'|| a[i][j]=='o'|| a[i][j]=='u')
                    vowel++;
        }
        printf("%s = %d\n",a[i],vowel);
        vowel=0;// Reset vowel count for each string
    }
    return 0;
}
/*OUTPUT-
Enter 1 string: esheta
Enter 2 string: jaiswal
Enter 3 string: peace
Enter 4 string: hope
Enter 5 string: perseverance
esheta 
 = 3   
jaiswal
 = 3   
peace
 = 3
hope
 = 2
perseverance
 = 5
 */