/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.

Example-
int main()
{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int min;
    public:
        Time(){}
        Time(int duration)
        {
            hour=duration/60;
            min=duration%60;
            /*For seconds:
            hour=duration/3600;
            min=duration%3600; */

        }
        void display()
        {
            cout<<"Hours: "<<hour<<" Minute: "<<min<<endl;
        }
};
int main()
{
    int duration;
    cout<<"Enter time duration in minutes : "<<endl;
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}
/*OUTPUT-
Enter time duration in minutes : 
300
Hours: 5 Minute: 0
*/