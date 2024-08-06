/*1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/
#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    protected:
        char name[50];
        int age;
    public:
        void setName(char * n)
        {
            strcpy(name,n);
        }
        void setAge(int a)
        {
            age=a;
        }
        char * getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};
class Employee:public Person
{
    protected:
        int empid;
        int salary;
    public:
        void setEmpid(int id)
        {
            empid=id;
        }
        void setSalary(int s)
        {
            salary=s;
        }
        int getEmpid()
        {
            return empid;
        }
        int getSalary()
        {
            return salary;
        }
        void display()
        {
            cout<<" Name="<<name<<" Age="<<age<<" Empid="<<empid<<" Salary="<<salary<<endl;
        }
};
int main()
{
    Employee e;
    e.setName("Prateek");
    e.setAge(23);
    e.setEmpid(123);
    e.setSalary(200000);
    e.display();

    return 0;
}
/*OUTPUT-
 Name=Prateek Age=23 Empid=123 Salary=200000
 */