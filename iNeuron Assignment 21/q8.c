//8. Write a program to store information of 5 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[30];
};
void input(struct student s[])
{
    for(int i=0;i<5;i++)
    {
        printf("\nEnter student roll_no: ");
        scanf("%d",&s[i].roll_no);
        fflush(stdin);

        printf("\nEnter student name: ");
        gets(s[i].name);

    }
}
void display(struct student s[])
{
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d: roll_no=%d name=%s",i+1,s[i].roll_no,s[i].name);
    }
}
int main()
{
    struct student s1[5];
    input(s1);   //input student details
    display(s1); //display student details
    return 0;
}
/*OUTPUT-
Enter student roll_no: 1

Enter student name: Aastha

Enter student roll_no: 2

Enter student name: Divya

Enter student roll_no: 3

Enter student name: Esheta

Enter student roll_no: 4

Enter student name: Sneha

Enter student roll_no: 5

Enter student name: Takshvi

Student 1: roll_no=1 name=Aastha
Student 2: roll_no=2 name=Divya
Student 3: roll_no=3 name=Esheta
Student 4: roll_no=4 name=Sneha
Student 5: roll_no=5 name=Takshvi
*/