//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20],t[20];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter %d city name: ",i+1);
        gets(a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=1+i;j<10;j++)
        {
            if(strcmp(a[i], a[j]) > 0)//if the first non-matching character in str1 is greater (in ASCII) than that of str2
                {
                    strcpy(t,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],t);
                }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
/*OUTPUT-
Enter 1 city name: Pune
Enter 2 city name: Kolkata
Enter 3 city name: Goa
Enter 4 city name: Bangalore
Enter 5 city name: Delhi
Enter 6 city name: Mumbai
Enter 7 city name: Hyderabad
Enter 8 city name: Jaisalmer
Enter 9 city name: Ratlam
Enter 10 city name: Ujjain
Bangalore
Delhi
Goa
Hyderabad
Jaisalmer
Kolkata
Mumbai
Pune
Ratlam
Ujjain
*/