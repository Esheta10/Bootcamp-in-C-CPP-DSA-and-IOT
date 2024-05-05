//4. Write a function to find the highest salary employee from a given array of 5 employees. [ Refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee 
{
    int id;
    char name[30];
    int salary;
};
struct employee findHighestSalary(struct employee e[],int size)
{
    struct employee highest_salary=e[0];
    for(int i=1;i<size;i++)
    {
        if(e[i].salary>highest_salary.salary)
            highest_salary=e[i];//assigns the current employee (e[i]) to highest_salary.
            //This means that the current employee becomes the employee with the highest salary found so far.
    }
    return highest_salary;
}
int main()
{
    struct employee e[5];
    //Employee details:
    for(int i=0;i<5;i++)
    {
        printf("\nEnter employee-id: ");
        scanf("%d",&e[i].id);
        fflush(stdin);

        printf("\nEnter employee-name: ");
        gets(e[i].name);

        printf("\nEnter employee-salary: ");
        scanf("%d",&e[i].salary);

        printf("\nEmployee %d: id=%d name=%s salary=%d",i+1,e[i].id,e[i].name,e[i].salary);

    }
    struct employee maxSalary=findHighestSalary(e,5);
    printf("\nEmployee with highest salary is: \n");
    printf("\nEmployee: id=%d name=%s salary=%d",maxSalary.id,maxSalary.name,maxSalary.salary);
    return 0;
}
/*OUTPUT-

Enter employee-id: 101

Enter employee-name: James

Enter employee-salary: 5000

Employee 1: id=101 name=James salary=5000
Enter employee-id: 102 

Enter employee-name: Ben

Enter employee-salary: 3000

Employee 2: id=102 name=Ben salary=3000
Enter employee-id: 103

Enter employee-name: Mike

Enter employee-salary: 7000

Employee 3: id=103 name=Mike salary=7000
Enter employee-id: 104 

Enter employee-name: Isaac

Enter employee-salary: 9000

Employee 4: id=104 name=Isaac salary=9000
Enter employee-id: 105

Enter employee-name: Juliet

Enter employee-salary: 1000

Employee 5: id=105 name=Juliet salary=1000
Employee with highest salary is:

Employee: id=104 name=Isaac salary=9000
*/