/*6. Program to check whether a year is a leap year or not. Using switch statement*/
/* Every 100 years we get a century year and the rest are non-century years.But,it is not certain that 
all century years are leap years....those century years which are %400 are leap years. And in case of
non-century years, those non-century years which are %4 are leap years.*/
/*
  if(year%100==0)----------------------->switch(x%100)
  {
    if(year%400==0)-------------------------->case 1: switch(x%400)
        printf("leap year");                                 case 1:leap year;break;
    else                                                     case 0:not leap year;break;
        printf("not leap year");
  }                                                             break;
  else--------------------------------------->case 2:  switch(x%4)

  {
    if(year%4==0)                                             case 1:leap year;break;
        printf("leap year");
    else                                                      case 2:not leap year;break;
        printf("not leap year");
  }                                                                break;
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 1: switch(year%400==0)
                    {
                        case 1:printf("leap year");break;
                        case 0:printf("not leap year"); break;
                    }
                    break;
        case 0: switch(year%4==0)
                {
                    case 1:printf("leap year");break;
                    case 0:printf("not leap year");break;
                }     
                break;
    }
    return 0;
}