/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/
#include<iostream>
using namespace std;
class Student
{
    public:
        int id;
        char name[20];
    public:
        void accept()
        {
            cout<<"Enter student id: "<<endl;
            cin>>id;
            cout<<"Enter student name: "<<endl;
            cin>>name;
        }
        void display()
        {
            cout<<"--------------------------------"<<endl;
            cout<<"**Student Marklist**"<<endl;
            cout<<"--------------------------------"<<endl;
            cout<<"Student id: "<<id<<endl;
            cout<<"Student name: "<<name<<endl;
        }
};
class StudentExam: public Student
{
    public:
        int sub1,sub2,sub3,sub4,sub5,sub6;
    public:
        void getData()
        {
            accept();
            cout<<"Enter the marks in subject 1: "<<endl;
            cin>>sub1;
            cout<<"Enter the marks in subject 2: "<<endl;
            cin>>sub2;
            cout<<"Enter the marks in subject 3: "<<endl;
            cin>>sub3;
            cout<<"Enter the marks in subject 4: "<<endl;
            cin>>sub4;
            cout<<"Enter the marks in subject 5: "<<endl;
            cin>>sub5;
            cout<<"Enter the marks in subject 6: "<<endl;
            cin>>sub6;
        }
        void showData()
        {
            display();
            cout<<"--------------------------------"<<endl;
            cout<<"Marks of subject 1: "<<sub1<<endl;
            cout<<"Marks of subject 2: "<<sub2<<endl;
            cout<<"Marks of subject 3: "<<sub3<<endl;
            cout<<"Marks of subject 4: "<<sub4<<endl;
            cout<<"Marks of subject 5: "<<sub5<<endl;
            cout<<"Marks of subject 6: "<<sub6<<endl;
            cout<<"--------------------------------"<<endl;
    
    }
};
class StudentResult : public StudentExam
{
    public:
        void calculate()
        {
            float perc=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
            cout<<"Total percentage: "<<perc<<endl;
            cout<<"--------------------------------"<<endl;
        }
};
int main()
{
    StudentResult st;
    int count,i;
    cout<<"Enter the no. of students you want? "<<endl;
    cin>>count;
    for(i=0;i<count;i++)
    {
        st.getData();
        st.showData();
        st.calculate();
    } 
    return 0;
}
/*output-
Enter the no. of students you want? 
1
Enter student id: 
1
Enter student name: 
Prajakta
Enter the marks in subject 1: 
89
Enter the marks in subject 2: 
90
Enter the marks in subject 3: 
68
Enter the marks in subject 4: 
87
Enter the marks in subject 5: 
68
Enter the marks in subject 6: 
90
--------------------------------
**Student Marklist**
--------------------------------
Student id: 1
Student name: Prajakta
--------------------------------
Marks of subject 1: 89
Marks of subject 2: 90
Marks of subject 3: 68
Marks of subject 4: 87
Marks of subject 5: 68
Marks of subject 6: 90
--------------------------------
Total percentage: 82
--------------------------------*/