//1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str,c;//Declare a pointer to a character (str) and a character (c)
    int i=0,j=1;//i is used as an index for the character array, 
    //and j is used for tracking the size of the dynamically allocated memory.

    str=(char*)malloc(sizeof(char));//pehle humne ek character ke liye memory allocate karwayi hai
    printf("Enter a string:");

    while(c!='\n')//jab tak user enter key nahi press karega tab tak ye loop chalega
    {
        c=getc(stdin);//taking  one-one character input
        //getc takes 1 character input
        j++;// Increment j to track the size of the string
        str=(char*)realloc(str,j*sizeof(char));
        //Inside the loop, memory is reallocated using realloc to accommodate the new character entered by the user. 
        str[i]=c;// Store the character in the string
        i++;// Increment i for the next character
    }
    str[i]='\0';// Add a null terminator to mark the end of the string

    printf("The entered string is:%s",str);
    free(str);// Free dynamically allocated memory

    return 0;
}
/*OUTPUT-
Enter a string:Esheta Jaiswal
The entered string is:Esheta Jaiswal
*/
