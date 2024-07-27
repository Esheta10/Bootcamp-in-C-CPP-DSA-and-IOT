/*7. Create an Integer class and overload logical not operator for that class.*/
#include<iostream>
using namespace std;
class Integer   //wrapper class
{
    private:
        int i;
    public:
        Integer(int i):i(i) //Initializer List
        {

        }
       int operator!()
       {
        return -i;
       } 
};
int main()
{
    Integer x=10;   
    cout<<!x;

    return 0;
}
/*OUTPUT-
-10

What is a Wrapper Class?
A wrapper class in C++ is a class that "wraps" around a primitive data type or another class. It provides a way to work with the wrapped data more easily, adding new functionalities or simplifying complex operations.

Why Use a Wrapper Class?
Encapsulation: It hides the internal details of the data.
Additional Features: It can add extra methods or features that the original data type does not have.
Consistency: It can provide a consistent interface for different data types or resources.
*/
