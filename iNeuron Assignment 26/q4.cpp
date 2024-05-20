//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
    private:
    int count;
    public:
        Counter()
        {
            count=0;
        }
        void inc_count()
        {
            count++;
        }
        int get_count()
        {
            return count;
        }           
};
int main()
{
    Counter c1;
    
    cout<<"Before calling Counter function,count="<<c1.get_count()<<endl;

    c1.inc_count();

    cout<<"After calling Counter function,count="<<c1.get_count()<<endl;

    return 0;
}
/*OUTPUT-
Before calling Counter function,count=0
After calling Counter function,count=1 
----------------------------------------OR---------------------------------------------------
#include<iostream>
using namespace std;
class  Counter
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
        }
        int get_count()
        {
            return count;
        }
};
int Counter::count=0;
int main()
{
    Counter c1;
    cout<<c1.get_count()<<endl; //1
    return 0;
}
*/