//2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
//number of instance member variables and also define instance member functions to
//set values for time and display values of time.
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        void setData(int hour,int minute,int second)
        {
            hr=hour;
            min=minute;
            sec=second;
        }
        void print()
        {
            cout<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
        }
};
int main()
{
    Time t1;
    t1.setData(3,45,20);
    t1.print();

    return 0;
}
/*OUTPUT-
3 hr 45 min 20 sec
*/
