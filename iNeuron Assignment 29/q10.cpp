/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example-
int main()
{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion 
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
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
        Dollar(int y)
        {
            d=y;
        }
        int getD()
        {
            return d;
        }
        void display()
        {
            cout<<"Dollar: "<<d<<endl;
        }
};
class Rupee
{
    private:
        int r;
    public:
        Rupee(){}
        Rupee(int x)
        {
            r=x;
        }
        void display()
        {
            cout<<"Rupee: "<<r<<endl;
        }
        int getR()
        {
            return r;
        }
        Rupee(Dollar u)
        {
            r=u.getD()*100;
        }
        operator int()
        {
            return r;
        }
        operator Dollar()
        {
            return r/100;
        }
};
int main()
{
    Rupee r = 200;
    Dollar d=r; // Rupee to Dollar conversion 
    r.display();
    r=d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
/*OUTPUT-
Rupee: 200
Dollar: 2
Rupee: 200
*/