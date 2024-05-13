//7. Define a class Greatest and define instance member function to find Largest among
//3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest
{
    private:
        int a,b,c,greatest;
    public:
        void setN(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        int getC()
        {
            return c;
        }
        void calculateGreatest()
        {
            if(a>b && a>c)
                greatest=a;
            else if(b>a && b>c)
                greatest=b;
            else
                greatest=c;  
        }
        int getGreatest()
        {
            return greatest;
        }
};
int main()
{
    Greatest g1,g2,g3;
    g1.setN(10,20,30);
    g1.calculateGreatest();
    g2.setN(40,50,60);
    g2.calculateGreatest();
    g3.setN(70,80,90);
    g3.calculateGreatest();

    cout<<"Greatest of "<<g1.getA()<<" "<<g1.getB()<<" and "<<g1.getC()<<" is: "<<g1.getGreatest()<<endl;
    cout<<"Greatest of "<<g2.getA()<<" "<<g2.getB()<<" and "<<g2.getC()<<" is: "<<g2.getGreatest()<<endl;
    cout<<"Greatest of "<<g3.getA()<<" "<<g3.getB()<<" and "<<g3.getC()<<" is: "<<g3.getGreatest()<<endl;
}
/*OUTPUT-
Greatest of 10 20 and 30 is: 30
Greatest of 40 50 and 60 is: 60
Greatest of 70 80 and 90 is: 90
*/