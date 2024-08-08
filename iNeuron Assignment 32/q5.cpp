/*5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/
#include<bits/stdc++.h>
using namespace std;

class A
{
    protected:
        string name;
        int age;
    public:
        A()
        {
            cout<<"Default constructor called"<<endl;
        }
        A(string name,int age)
        {
            this->name=name;
            this->age=age;
        }

};
class B: public A
{
    public:
        int rank;
    public:
        B():A()
        {
            cout<<"Default constructor of derived class called"<<endl;
        }
        B(int rank,string name,int age):A(name,age)
        {
            this->rank=rank;
        }
        void show_data()
        {
            cout<<"Name: "<<name<<" Rank:"<<rank<<" Age: "<<age<<endl;
        }
};
int main()
{
    B b1(23,"Prateek",20);
    b1.show_data();

    return 0;
}
/*output-
Name: Prateek Rank:23 Age: 20
*/