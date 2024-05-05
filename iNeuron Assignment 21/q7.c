//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
}start,end,diff;
int main()
{
    printf("Enter start time:\nFormat should be:HH:MM:SS\n");
    scanf("%d %d %d",&start.hour,&start.min,&start.sec);

    printf("Enter end time:\nFormat should be:HH:MM:SS\n");
    scanf("%d %d %d",&end.hour,&end.min,&end.sec);

    if(end.sec < start.sec)
    {
        end.sec=end.sec+60;
        end.min=end.min-1;
    }
    if(end.min < start.min)
    {
        end.min=end.min+60;
        end.hour=end.hour-1;
    }
    if(end.hour < start.hour)
    {
        end.hour=end.hour+12;
    }

    diff.hour=end.hour-start.hour;
    diff.min=end.min-start.min;
    diff.sec=end.sec-start.sec;

    printf("\nTime difference is: %d hours %d minutes %d seconds",diff.hour,diff.min,diff.sec);
    return 0;
}
/*OUTPUT-
Enter start time:        
Format should be:HH:MM:SS
5 30 50
Enter end time:
Format should be:HH:MM:SS
10 15 40

Time difference is: 4 hours 44 minutes 50 seconds
*/