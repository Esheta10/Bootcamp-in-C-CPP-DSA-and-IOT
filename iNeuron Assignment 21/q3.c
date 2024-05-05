//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct Employee 
{
    int id;
    char name[30];
    int salary;
};
struct Employee input(struct Employee e)
{
    printf("Enter employee id: ");
    scanf("%d", &e.id);
    fflush(stdin);

    printf("Enter employee name: ");
    gets(e.name);

    printf("Enter employee salary: ");
    scanf("%d",&e.salary);

    return e;
}
void display(struct Employee e)
{
    printf("Employee:id=%d name=%s salary=%d",e.id,e.name,e.salary);
}
int main()
{
    struct Employee e1;
    e1=input(e1);
    display(e1);
    return 0;
}
/*OUTPUT-
Enter employee id: 100
Enter employee name: Prateek Jain
Enter employee salary: 1000000
Employee:id=100 name=Prateek Jain salary=1000000
*/