/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/
#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int a;
    public:
        StaticCount(int x)
        {
            a=x;
        }
        void increment()
        {
            a++;
        }
        int getA()
        {
            return a;
        }
};
int StaticCount::a;
int main()
{
    StaticCount sc(5);
    cout<<"Before incrementing,value was : "<<sc.getA()<<endl;
    sc.increment();
    cout<<"After incrementing 1 time value is : "<<sc.getA()<<endl;
    sc.increment();
    cout<<"After incrementing 2 times value is : "<<sc.getA()<<endl;
    sc.increment();
    cout<<"After incrementing 3 times value is : "<<sc.getA()<<endl;

    return 0;
}
/*OUTPUT-
Before incrementing,value was : 5
After incrementing 1 time value is : 6
After incrementing 2 times value is : 7
After incrementing 3 times value is : 8
*/