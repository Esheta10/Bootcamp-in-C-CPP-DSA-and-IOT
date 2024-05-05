//6. Write a function to sort employees according to their names [refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    int salary;
};
struct employee sort_by_name(struct employee e[],int size)
{
    for(int i=0;i<=size;i++)//0 to 4
    {
        for(int j=i+1;j<size;j++)//1 to 4
        {
            if(strcmp(e[i].name,e[j].name)>0)//If the first string is lexicographically greater than the second string, strcmp() returns a positive value.
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
         printf("\nEnter employee-id: ");
         scanf("%d",&e[i].id);
         fflush(stdin);//to clear the buffer

         printf("\nenter employee-name: ");
         gets(e[i].name);

         printf("\nenter employee-salary: ");
         scanf("%d",&e[i].salary);

         printf("\nemployee %d:id=%d name=%s salary=%d",i+1,e[i].id,e[i].name,e[i].salary);
    }
    sort_by_name(e,5);//to sort employee by names

    //display sorted employee
    printf("\nemployees sorted by names: ");
    for(int i=0;i<5;i++)
    {
        printf("\nemployee %d:id=%d name=%s salary=%d",i+1,e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}
/*OUTPUT-
Enter employee-id: 101

enter employee-name: dylan

enter employee-salary: 6000

employee 1:id=101 name=dylan salary=6000
Enter employee-id: 102

enter employee-name: ben

enter employee-salary: 4000

employee 2:id=102 name=ben salary=4000
Enter employee-id: 103

enter employee-name: eleanor

enter employee-salary: 1000

employee 3:id=103 name=eleanor salary=1000
Enter employee-id: 104

enter employee-name: caesar 

enter employee-salary: 9000

employee 4:id=104 name=caesar salary=9000
Enter employee-id: 105

enter employee-name: alex

enter employee-salary: 3000

employee 5:id=105 name=alex salary=3000
employees sorted by names:
employee 1:id=105 name=alex salary=3000
employee 2:id=102 name=ben salary=4000
employee 3:id=104 name=caesar salary=9000
employee 4:id=101 name=dylan salary=6000
employee 5:id=103 name=eleanor salary=1000
*/