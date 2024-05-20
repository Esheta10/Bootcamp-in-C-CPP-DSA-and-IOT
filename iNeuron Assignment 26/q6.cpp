//6. Define a class student and write a program to enter student details using constructor
//and define member function to display all the details.
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    private:
        string name;
        int age;
    public:
        Student(string name1,int age1)
        {
            name=name1;
            age=age1;
        }
        void display()
        {
            cout<<"Name-"<<name<<" Age-"<<age<<endl;
        }
};
int main()
{
    Student s1("Samuel",17),s2("Ryan",18);
    
    cout<<"Student details:"<<endl;
    s1.display();
    s2.display();

    return 0;
}
/*OUTPUT-
Student details:
Name-Samuel Age-17
Name-Ryan Age-18
*/