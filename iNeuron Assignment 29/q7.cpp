/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
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
        Time(int hour,int min):hour(hour),min(min)
        {
        }
        int getH()
        {
            return hour;
        }
        int getM()
        {
            return min;
        }
        void display()
        {
            cout<<"Hour : "<<hour<<" Minute : "<<min<<endl;
        }
};
class Minute
{
    private:
        int min;
    public:
        Minute()
        {
            min=0;
        }
        Minute(Time t)
        {
            min=t.getM();
        }
         void display()
        {
            cout<<"Minute : "<<min<<endl;
        }
        
};
int main()
{
    Time t1(2,30);
    t1.display();

    Minute m1;
    m1.display(); 
    m1=t1;// Fetch minute from time---> Minute(Time)

    t1.display();
    m1.display();
    return 0;
}
/*OUTPUT-
Hour : 2 Minute : 30
Minute : 0
Hour : 2 Minute : 30
Minute : 30
*/


