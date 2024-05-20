//2. Define a class Time to represent a time with instance variables h,m and s to store
//hour, minute and second. Also define following member functions
//a. void setTime(int,int,int)
//b. void showTime()
//c. void normalize()
//d. Time add(Time)
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr;
        int min;
        int sec;
    public:
        void set_data(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void show_data()
        {
            cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
        void normalize()
        {
            min=min + sec/60;
            sec=sec%60;
            hr = hr + min/60;
            min=min%60;
        }
        Time add(Time t)
        {
            Time temp;
            temp.hr=hr + t.hr;
            temp.min=min +t.min;
            temp.sec=sec+t.sec;
            temp.normalize();
            return temp;
        }
};
int main()
{
    Time t1,t2,t3;
    t1.set_data(5,50,30);
    t2.set_data(7,20,34);

    t1.show_data();
    t2.show_data();

    t3=t1.add(t2);
    t3.show_data();

    return 0;
}
/*OUTPUT-
5 : 50 : 30
7 : 20 : 34
13 : 11 : 4
*/
