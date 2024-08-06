/*4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include<iostream>
using namespace std;
class Person    //BASE CLASS
{
    protected:
        char name[20];
        char address[50];
        long long phone_no;
};
class Employee:public Person    //DERIVED CLASS: DERIVED FROM CLASS PERSON
{
    public:
        int eno;
        char ename[20];
};
class Manager:public Employee   //DERIVED CLASS: DERIVED FROM CLASS EMPLOYEE
{
    public:
        char designation[10];
        char dept_name[20];
        float basic_salary;
    public:
        void accept_details()
        {
            cout<<"Enter details of Manager"<<endl;
            cout<<"-----------------------------"<<endl;
            cout<<"Enter Employee No."<<endl;
            cin>>eno;
            cout<<"Enter name:"<<endl;
            cin>>ename;
            cout<<"Enter address:"<<endl;
            cin>>address;
            cout<<"Enter Phone No. :"<<endl;
            cin>>phone_no;
            cout<<"Enter designation :"<<endl;
            cin>>designation;
            cout<<"Enter Department Name :"<<endl;
            cin>>dept_name;
            cout<<"Enter Basic Salary:"<<endl;
            cin>>basic_salary;
        }
};
int main()
{
    int i,count,temp;
    Manager man[100];
    cout<<"How many Manager you want to enter?"<<endl;
    cin>>count;//ACCEPT DETAILS FOR 'N MANAGERS
    for(int i=1;i<=count;i++)
    {
        man[i].accept_details();
    }
    temp=0;
    for(int i=1;i<=count;i++)
    {
        if(man[temp].basic_salary < man[i].basic_salary)//WE ARE ASSUMING TEMP TO HAVE THE THE HIGHEST SALARY
            temp=i;
    }
    cout<<"Manager with highest salary is: "<<man[temp].basic_salary<<endl;
    cout<<"And Manager name is: "<<man[temp].ename;

    return 0;
}
/*OUTPUT-
How many Manager you want to enter?
2
Enter details of Manager
-----------------------------
Enter Employee No.
101
Enter name:
Surendra
Enter address:
Pune
Enter Phone No. :
02045777
Enter designation :
Manager
Enter Department Name :
Production
Enter Basic Salary:
75000
Enter details of Manager
-----------------------------
Enter Employee No.
202
Enter name:
Prashant
Enter address:
Mumbai
Enter Phone No. :
02232777
Enter designation :
Manager
Enter Department Name :
Animation
Enter Basic Salary:
85000
Manager with highest salary is: 85000
And Manager name is: Prashant
*/