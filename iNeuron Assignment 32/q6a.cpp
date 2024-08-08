/*6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.*/
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
        void  displayPerson()
        {
            cout<<"Name: "<<name<<" Age: "<<age<<endl;
        }
};
class Student:public Person
{   
    protected:
        string batch;
    public:
        Student(string name,int age,string batch):Person(name,age)
        {
            this->batch=batch;
        }
        void displayStudent()
        {
            displayPerson();
            cout<<"Batch: "<<batch<<endl;
        }
        
};
class Topper:public Student
{
    private:
        int rank;
    public:
        Topper(int rank,string name,int age,string batch):Student(name,age,batch)
        {
            this->rank=rank;
        }
        void displayTopper()
        {
            displayStudent();
            cout<<"Rank: "<<rank<<endl;
        }
};
int  main()
{
    Topper t1(23,"Prateek",20,"C/C++ Bootcamp with DSA and IOT");
    t1.displayTopper();
    cout<<endl;
    t1.displayStudent();
    cout<<endl;
    t1.displayPerson();
    cout<<endl;

    return 0;
}
/*output-
Name: Prateek Age: 20
Batch: C/C++ Bootcamp with DSA and IOT
Rank: 23

Name: Prateek Age: 20
Batch: C/C++ Bootcamp with DSA and IOT

Name: Prateek Age: 20
*/