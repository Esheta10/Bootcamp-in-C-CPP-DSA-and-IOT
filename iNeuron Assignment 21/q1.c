//1. Define a structure Employee with member variables id, name, salary.
#include<stdio.h>
#include<string.h>
struct Employee
{
        int id;
        char name[30];
        int salary;
};
int main()
{
    struct Employee e;
    printf("Enter employee id: ");
    scanf("%d",&e.id);
    fflush(stdin);//to clear the buffer

    printf("Enter the name of employee: ");
    gets(e.name);

    printf("Enter employee's salary: ");
    scanf("%d",&e.salary);

    printf("employee:id=%d name=%s salary=%d",e.id,e.name,e.salary);
    return 0;
}
/*OUTPUT-
Enter employee id: 101
Enter the name of employee: Esheta Jaiswal
Enter employee's salary: 200000   
employee:id=101 name=Esheta Jaiswal salary=200000
*/