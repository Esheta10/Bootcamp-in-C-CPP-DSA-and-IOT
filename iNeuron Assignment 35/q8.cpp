/*8. Write a C++ Program to implement push and pop methods from stack using
template.*/
#include<iostream>
using namespace std;
template<class T>
class Stack
{
    private:
            T s[100];
            int top;
    public:
        Stack()
        {
            top=-1;
        }
        ~Stack()
        {
            top=-1;
        }
        void push(T value)
        {
                top++;
                s[top]=value;   //s[++top]=value;
        }
        T pop()
        {
            return s[top--];
            
        }
};
int main()
{
        Stack<int> int_stack;
        Stack<string> str_stack;

        int_stack.push(10);
        str_stack.push("ineuron");

        cout<<int_stack.pop()<<endl;
        cout<<str_stack.pop()<<endl;

        return 0;
}
/*OUTPUT-
10
ineuron
*/