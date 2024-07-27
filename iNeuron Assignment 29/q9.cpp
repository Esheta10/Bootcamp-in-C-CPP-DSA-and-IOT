/*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
Example-
int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}*/
#include<iostream>
using namespace std;
class Dollar
{
    private:
        int d;
    public:
        Dollar(){}
        Dollar(int x)
        {
            d=x;
        }
        void display()
        {
            cout<<"d = "<<d<<endl;
        }
};
int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;
}
/*OUTPUT-
d = 50
*/
