/*8. Write a C++ program to find the factorial of a number using copy constructor*/
#include<bits/stdc++.h>
using namespace std;

class fact
{
    private:
        int n,facti;
    public:
        fact(int x)
        {
            n=x;
            facti=1;
        }
        fact(fact &x)   //copy constructor
        {
            n=x.n;
            facti=1;
        }
        void calculate()
        {
            int i;
            for(i=1;i<=n;i++)
            {
                facti=facti*i;
            }
        }
        void display()
        {
            cout<<"Factorial is: "<<facti<<endl;
        }
};
int main()
{
    int x;
    cout<<"Enter value: ";
    cin>>x;
    fact f1(x);
    f1.calculate();
    f1.display();
    cout<<"-----------------"<<endl;
    fact f2(f1);    
//A copy constructor in C++ takes an object of the same class as its parameter, typically passed by reference. This allows the copy constructor to create a new object as a copy of an existing object
    f2.calculate();
    f2.display();

    return 0;
}
/*OUTPUT-
Enter value: 5
Factorial is: 120
-----------------
Factorial is: 120
*/