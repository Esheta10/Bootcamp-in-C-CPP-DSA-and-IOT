/*9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/
#include<iostream>
using namespace std;
class Integer
{
    private:
        int i;
    public:
        Integer(int i):i(i)
        {

        }
        operator int()
        {
            return i;
        }
        void display()
        {
            cout<<"i = "<<i<<endl;
        }
};
int main()
{
    Integer x=10;
    int a;

    a=x;
    cout<<"After typecasting Integer class object to int data type, a = "<<a<<endl;
    return 0;
}
/*OUTPUT-
After typecasting Integer class object to int data type, a = 10
*/