/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int min;
        int sec;
    public:
        Time()
        {
            hour=min=sec=0;
        }
        friend ostream & operator<<(ostream &os,Time &t);
        friend istream & operator>>(istream &in,Time &t);
        
        int operator==(Time &t)
        {
            int t1=3600*hour + 60*min + sec;
            int t2=3600*t.hour + 60*t.min +t.sec;
            if(t1==t2)
                return 1;
            else    
                return 0;
        }
          ~Time() { }

};
ostream & operator<<(ostream &os,Time &t)
{
    os<<"\nHours : "<<t.hour<<endl;
    os<<"Minutes : "<<t.min<<endl;
    os<<"Seconds : "<<t.sec<<endl;
    return os;
}

istream & operator>>(istream &in, Time &t)
{
    cout<<"Enter hours: ";
    in>>t.hour;
    cout<<"Enter minutes: ";
    in>>t.min;
    cout<<"Enter seconds: ";
    in>>t.sec;
    //normalize time
    t.min=t.min+ t.sec/60;
    t.sec=t.sec % 60;
    t.hour=t.hour+t.min/60;
    t.min=t.min % 60;
    t.hour=t.hour % 24;// Assuming we don't want hours to exceed 24

    if(t.hour>=24)
    {
        cout<<"Invalid Time"<<endl;
        t=Time();// Resetting to default time
    }
    return in;
}
int main()
{
    Time a,b;
    cout<<"Enter first time:"<<"\n----------------------------------------\n"<<endl;
    cin>>a;
    cout<<"First time"<<a;
    cout<<"Enter second time:"<<"\n----------------------------------------\n"<<endl;
    cin>>b;
    cout<<"Second time"<<b;
    if(a==b)
        cout<<"Times are same"<<endl;   
    else
        cout<<"Times are not same"<<endl; 

    return 0;
}
/*OUTPUT-
Enter first time:
----------------------------------------

Enter hours: 24
Enter minutes: 30
Enter seconds: 40
First time
Hours : 0
Minutes : 30
Seconds : 40
Enter second time:
----------------------------------------

Enter hours: 24
Enter minutes: 30
Enter seconds: 40
Second time
Hours : 0
Minutes : 30
Seconds : 40
*/