//4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int x=10,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;

    printf("%d %d %d %d\n",x,*p,**q,***r);
    printf("%d %d %d %d\n",&x,p,*q,**r);
    printf("%d %d %d\n",&p,q,*r);
    printf("%d %d\n",r,&q);
    printf("%d\n",&r);
}
/*OUTPUT-
10 10 10 10
6422300 6422300 6422300 6422300
6422296 6422296 6422296
6422292 6422292
6422288
*/