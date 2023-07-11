//10. Write a program to print a table of 5.
#include<stdio.h>
int main()
{
  int i,x;
  for(i=1;i<=10;i++)
  {
    x=5*i;
    printf("5 * %d is %d\n",i,x);
  }
  return 0;
}