/*11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/
#include<iostream>
using namespace std;
class Marks
{
    private:
        int marks;
    public:
        Marks(int m)
        {
            marks=m;
        }
        Marks *operator->() //overloading -> operator
        {
            return this;    //this pointer contains the address of current object
        }
        void display()
        {
            cout<<"Marks: "<<marks<<endl;
        }
};
int main()
{
    Marks m1(50);
    m1.display();
    m1->display();

    return 0;
}
/*OUTPUT-
Marks: 50
Marks: 50
*/