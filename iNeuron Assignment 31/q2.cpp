/*2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.*/
#include<iostream>
using namespace std;
class AddData   //base class
{
    protected:
        int num1,num2;
    public:
        void accept()
        {
            cout<<"Enter first number: "<<endl;
            cin>>num1;
            cout<<"Enter second number: "<<endl;
            cin>>num2;
        }
};
class Addition:public AddData   //derived class
{
    int sum;
    public:
        void add()
        {
            sum=num1+num2;
        }
        void display()
        {
            cout<<"Addition of two numbers is: "<<sum<<endl;
        }
};
int main()
{
    Addition a;
    a.accept();
    a.add();
    a.display();

    return 0;
}
/*OUTPUT-
Enter first number: 
10
Enter second number: 
20
Addition of two numbers is: 30*/
