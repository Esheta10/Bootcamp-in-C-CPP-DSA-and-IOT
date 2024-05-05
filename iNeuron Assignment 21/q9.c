//9. Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[30];
};
void input(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nenter student roll_no: ");
        scanf("%d",&s[i].roll_no);
        fflush(stdin);//to clear the buffer

        printf("\nenter student name: ");
        gets(s[i].name);
    }
}
void display(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nstudent %d: roll_no=%d name=%s",i+1,s[i].roll_no,s[i].name);
    }
}
int main()
{
    int n;
    printf("How many student details do you want to enter? ");
    scanf("%d",&n);
    struct student s[n];
    
    input(s,n);//input student details
    display(s,n);//display student details

    return 0;
}
/*OUTPUT-
How many student details do you want to enter? 3

enter student roll_no: 101

enter student name: brandon

enter student roll_no: 102

enter student name: jay

enter student roll_no: 103

enter student name: hudson

student 1: roll_no=101 name=brandon
student 2: roll_no=102 name=jay
student 3: roll_no=103 name=hudson
*/