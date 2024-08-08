/*4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/
#include<bits/stdc++.h>
using namespace std;
class Addition
{
    private:
        double x,y;
        double sum=0;
    public:
        int add(int x,int y)
        {
            this->x=x;
            this->y=y;
            sum=x+y;
            return sum;
        }
        double add(double x,int y)
        {
            this->x=x;
            this->y=y;
            sum=x+y;
            return sum;
        }
        double add(int x,double y)
        {
            this->x=x;
            this->y=y;
            sum=x+y;
            return sum;
        }
        double add(double x,double y)
        {
            this->x=x;
            this->y=y;
            sum=x+y;
            return sum;
        }
        void display()
        {
            cout<<"Sum : "<<sum<<endl;
        }
};
int main()
{
    Addition a;
    a.add(5.8,8.2);
    a.display();

    a.add(7,5);
    a.display();

    a.add(7.1,6);
    a.display();

    a.add(4,9.7);
    a.display();

    return 0;
}
/*OUTPUT-
Sum : 14  
Sum : 12  
Sum : 13.1
Sum : 13.7
*/