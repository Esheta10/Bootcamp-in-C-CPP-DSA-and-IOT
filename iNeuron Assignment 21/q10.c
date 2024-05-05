//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student.
#include<stdio.h>
#include<string.h>
struct Marks
{
    int roll_no;
    char name[30];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};
void input(struct Marks m[])
{
    for(int i=0;i<5;i++)
    {
        printf("\nenter student roll_no: ");
        scanf("%d",&m[i].roll_no);
        fflush(stdin);

        printf("\nenter student name: ");
        gets(m[i].name);

        printf("\nenter chemistry marks: ");
        scanf("%d",&m[i].chem_marks);

        printf("\nenter mathematics marks: ");
        scanf("%d",&m[i].maths_marks);

        printf("\nenter physics marks: ");
        scanf("%d",&m[i].phy_marks);

    }
}
void display(struct Marks m[])
{
    for(int i=0;i<5;i++)
    {
        m[i].percentage=((m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/300.0)*100;  //percentage calculation
    }
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d: roll_no=%d name=%s percentage=%.2f",i+1,m[i].roll_no,m[i].name,m[i].percentage);
    }
}
int main()
{
    struct Marks m[5];
    input(m);
    display(m);
    return 0;
}
/*OUTPUT-
enter student roll_no: 101

enter student name: jay

enter chemistry marks: 78

enter mathematics marks: 54

enter physics marks: 66

enter student roll_no: 102

enter student name: kit

enter chemistry marks: 67

enter mathematics marks: 80

enter physics marks: 74

enter student roll_no: 103

enter student name: nina

enter chemistry marks: 90

enter mathematics marks: 85

enter physics marks: 70

enter student roll_no: 104

enter student name: hudson

enter chemistry marks: 65

enter mathematics marks: 50

enter physics marks: 70

enter student roll_no: 105

enter student name: cassie

enter chemistry marks: 70

enter mathematics marks: 75

enter physics marks: 80

Student 1: roll_no=101 name=jay percentage=66.00
Student 2: roll_no=102 name=kit percentage=73.67
Student 3: roll_no=103 name=nina percentage=81.67
Student 4: roll_no=104 name=hudson percentage=61.67
Student 5: roll_no=105 name=cassie percentage=75.00
*/

