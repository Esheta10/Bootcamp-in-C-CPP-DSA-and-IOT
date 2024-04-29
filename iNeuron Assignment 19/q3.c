//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][10];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter %d fruit name:",i+1);
        fgets(a[i],10,stdin);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;  
}
/*OUTPUT-
Enter 1 fruit name:guava
Enter 2 fruit name:pear
Enter 3 fruit name:plum
Enter 4 fruit name:peach
Enter 5 fruit name:apple
guava

pear

plum

peach

apple
*/