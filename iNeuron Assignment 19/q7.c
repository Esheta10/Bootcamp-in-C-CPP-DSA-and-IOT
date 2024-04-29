//7. From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ip[]="23.134.300.13";

    char *a=strtok(ip,".");//This means strtok() will split the string ip into tokens whenever it encounters a ".".
    while(a != NULL)
    {
        int x=atoi(a);//coverting tokens to intgers
//atoi() is a function in C used for converting a string representing an integer into an actual integer value.
//For example, if a points to the string "23", atoi(a) would return the integer 23, which would then be assigned to the variable x. 
        if((x>=0)&&(x<=255))//to see if each token of IP Address falls within the range of valid values (0 to 255)
            printf("%d ",x);
        a=strtok(NULL,".");//strtok() is being called to continue tokenizing the string from where it left off in the previous call.
    }
}
/*
`strtok()` is a function used to tokenize (split) a string into smaller strings (tokens) based on a delimiter. 
It takes two arguments: the first argument is the string to be tokenized, 
and the second argument is a string containing all the delimiter characters.

In this code, `a = strtok(NULL, ".")` is used inside a `while` loop to get the next token from the string.
Let me explain how it works:

1. When `strtok()` is called with the string `ip` and delimiter `"."` for the first time,
it returns a pointer to the first token in the string `ip` before the delimiter `"."`. 
The delimiter `"."` is replaced with a null character ('\0'), 
and the internal pointer of `strtok()` is updated to point to the next character after the delimiter.
   
For example, if `ip` is `"23.134.12.13"`, after the first call to `strtok()`,
it returns a pointer to the string `"23"`, and the `ip` string becomes `"23\0 134.12.13"`, where `\0` denotes the null character.

2. In subsequent calls to `strtok()` with the first argument as `NULL`, 
it continues from where it left off in the previous call, searching for the next token in the string.

So, `strtok(NULL, ".")` will return the next token after the previously found delimiter `"."`. 
It continues this process until there are no more tokens left in the string, at which point it returns `NULL`.

Therefore, `a = strtok(NULL, ".")` in your code is used to iterate through each token separated by the delimiter `"."` in the IP address string `ip`. 
Each token represents a part of the IP address.
*/

/*OUTPUT-
23 134 12 13 

if
char ip[]="23.134.300.13";
OUTPUT=23 134 13
*/