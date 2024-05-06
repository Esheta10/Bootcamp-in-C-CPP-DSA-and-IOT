//4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str,c;
    int i=0,j=1;

    str=(char*)malloc(sizeof(char));
    printf("\nEnter a text:");

    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\0';

    printf("\nThe entered text is: %s",str);
    free(str);

    return 0;
}
/*OUTPUT-
Enter a text:BELIEVE IN YOURSELF,AND YOU'RE HALFWAY THERE

The entered text is: BELIEVE IN YOURSELF,AND YOU'RE HALFWAY THERE
*/