//2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
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
    printf("Enter employee-id: ");
    scanf("%d",&e.id);
    fflush(stdin);//to clear the buffer

    printf("Enter employee-name: ");
    gets(e.name);

    printf("Enter employee salary: ");
    scanf("%d",&e.salary);

    return e;
}
void display(struct Employee e)
{
    printf("Employee: id=%d name=%s salary=%d",e.id,e.name,e.salary);
}
int main()
{
    struct Employee e1;
    e1=input(e1);// Passing the address of e1, changes to e1 will reflect in e1.
    display(e1);
    return 0;
}
/*OUTPUT-
Enter employee-id: 101
Enter employee-name: Esheta Jaiswal 
Enter employee salary: 200000
Employee: id=101 name=Esheta Jaiswal salary=200000
*/