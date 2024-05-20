//5. Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
    private:
        int dd;
        int mm;
        int yy;
    public:
        Date()
        {
            dd=17;
            mm=5;
            yy=2024;
            cout<<"Date object has been created"<<endl;
        }
        void display()
        {
            cout<<"The entered date is:"<<endl;
            cout<<"dd-"<<dd<<" mm-"<<mm<<" yy-"<<yy<<endl;
        }
};
int main()
{
    Date date1;
    date1.display();

    return 0;
}
/*OUTPUT-
Date object has been created
The entered date is:
dd-17 mm-5 yy-2024
*/