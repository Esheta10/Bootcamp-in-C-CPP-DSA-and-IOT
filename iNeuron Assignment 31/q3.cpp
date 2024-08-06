/*3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.*/
#include<iostream>
using namespace std;

class Subject
{
    protected:
        int subject[3];
    public:
        void accept_total_marks()
        {
            cout<<"Enter the marks in Maths: "<<endl;
            cin>>subject[0];
            cout<<"Enter the marks in Science: "<<endl;
            cin>>subject[1];
            cout<<"Enter the marks in Geography: "<<endl;
            cin>>subject[2];        
        }
};
class Total_Marks:public Subject
{
    protected:
        int total;
    public:
        void sum_Of_All_Subjects()
        {
            total=subject[0]+subject[1]+subject[2];
        }
};
class Percentage:public Total_Marks
{
    private:
        float per;
    public:
        void calculate_Percentage()
        {
            per=total/3.0;
        }
        void show_result()
        {
            cout<<"########################"<<endl;
            cout<<"Percentage of a student is: "<<per<<endl;
        }
};
int main()
{
    Percentage p1;
    p1.accept_total_marks();
    p1.sum_Of_All_Subjects();
    p1.calculate_Percentage();
    p1.show_result();

    return 0;
}
/*OUTPUT-
Enter the marks in Maths: 
91
Enter the marks in Science: 
92
Enter the marks in Geography: 
85
########################
Percentage of a student is: 89.3333*/
