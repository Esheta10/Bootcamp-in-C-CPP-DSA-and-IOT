/*7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.*/
#include<bits/stdc++.h>
using namespace std;

class Person
{
    protected:
        string name;
        int age;
    public:
        Person()
        {

        }
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void displayPerson()
        {
            cout<<"Name: "<<name<<" Age: "<<age<<endl;
        }
};
class Student:public Person
{
    protected:
        int rank;
    public:
        Student(int rank,string name,int age):Person(name,age)
        {
            this->rank=rank;
        }
        void displayStudent()
        {
            cout<<"Rank: "<<rank<<endl;
        }
};
int main()
{
    Student s1(23,"Prateek",20);
    s1.displayPerson();
    cout<<endl;

    s1.displayStudent();
    cout<<endl;

    return 0;
}
/*output-
Name: Prateek Age: 20

Rank: 23*/
