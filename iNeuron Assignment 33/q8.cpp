/*8. Create a base class called proof. Use this class to store two int type values that could
be used to prove that triangle is a right angled triangle. Create a class compute
which will determine whether a triangle is a right angled triangle.Using these classes, design a program that will accept dimensions of a triangle, and
display the result.
(Summary: Prove that triangle is a right angled triangle using pythagoras theorem).*/
#include<iostream>
using namespace std;
class proof
{
    protected:
        int p,b;
    public:
        void set_data(int x,int y)
        {
            p=x;
            b=y;
        }
        int getP()
        {
            return p;
        }
        int getB()
        {
            return b;
        }
};
class compute:public proof
{
    private:
        int h,rt;
    public:
        compute(int x):h(x)
        {

        }
        int check_rt()
        {
            rt=getP()*getP()+getB()*getB();
            return rt;
        }
        void display()
        {
            if(h*h == check_rt())
                cout<<"It is a right angled triangle"<<endl;
            else
                cout<<"It is not a right angled triangle"<<endl;
        }
};
int main()
{
    int a,b,c;
    cout<<"Enter the values for perpendicular and base: ";
    cin>>a>>b;
    cout<<"Enter the hypotenuse of triangle: ";
    cin>>c;
    compute c1(c);
    c1.set_data(3,4);
    c1.display();

    return 0;
}
/*OUTPUT-
Enter the values for perpendicular and base: 3 4
Enter the hypotenuse of triangle: 5
It is a right angled triangle
*/