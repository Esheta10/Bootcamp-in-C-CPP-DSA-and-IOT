//5. Write a function to sort employees according to their salaries [ refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    int salary;
};
struct employee sort(struct employee e[],int size)
{
    for(int i=0;i<=size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                struct employee temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }

        }
    }
}
int main()
{
    struct employee e[5];
    //enter employee details
    for(int i=0;i<5;i++)
    {
        printf("\nenter employee-id: ");
        scanf("%d",&e[i].id);
        fflush(stdin);//to clear the buffer

        printf("\nenter employee name: ");
        gets(e[i].name);

        printf("\nenter employee salary: ");
        scanf("%d",&e[i].salary);

        printf("Employee %d: id=%d name=%s salary=%d",i+1,e[i].id,e[i].name,e[i].salary);
    }
    sort(e,5);  //sort employees by salary

    //display sorted employees
    printf("\nEmployees sorted by salary:");
    for(int i=0;i<5;i++)
    {
         printf("\nEmployee %d: id=%d name=%s salary=%d \n",i+1,e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}
/*OUTPUT-
enter employee-id: 101

enter employee name: jason

enter employee salary: 6000
Employee 1: id=101 name=jason salary=6000
enter employee-id: 102

enter employee name: jacob

enter employee salary: 1000
Employee 2: id=102 name=jacob salary=1000
enter employee-id: 103

enter employee name: mike

enter employee salary: 5000
Employee 3: id=103 name=mike salary=5000
enter employee-id: 104

enter employee name: ben

enter employee salary: 2000
Employee 4: id=104 name=ben salary=2000
enter employee-id: 105

enter employee name: isaac

enter employee salary: 10000
Employee 5: id=105 name=isaac salary=10000
Employees sorted by salary:
Employee 1: id=102 name=jacob salary=1000

Employee 2: id=104 name=ben salary=2000

Employee 3: id=103 name=mike salary=5000

Employee 4: id=101 name=jason salary=6000

Employee 5: id=105 name=isaac salary=10000
*/