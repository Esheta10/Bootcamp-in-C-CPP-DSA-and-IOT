/*3. Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type.*/
#include<bits/stdc++.h>
using namespace std;

class A
{
    int x;
    public:
        A(int n)
        {
            x=n;
        }
        void show()
        {
            cout<<"Value = "<<x<<endl;
        }
        void swap(A* num)
        {
            int t;
            t=x;
            x=num->x;
            num->x=t;
        }
};
int main()
{
    A a1(5),a2(10);
    cout<<"Before swapping: "<<endl;
    a1.show();
    a2.show();

    a1.swap(&a2);
    cout<<"After swapping: "<<endl;
    a1.show();
    a2.show();

    return 0;
}
/*OUTPUT-
Before swapping: 
Value = 5        
Value = 10       
After swapping:  
Value = 10       
Value = 5  
*/