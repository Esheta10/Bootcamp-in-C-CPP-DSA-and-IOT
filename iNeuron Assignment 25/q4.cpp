//4. Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargestNumber
{
    private:
        int a,b,c,largest;
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
        void calculateLargest()
        {
            if(a>b && b>c)
                largest=a;
            else if(b>a && b>c)
                largest=b;
            else
                largest=c;
        }
        int getLarge()
        {
            return largest;
        }
};
int main()
{
    LargestNumber l1;
    l1.setN(10,50,200);
    l1.calculateLargest();

    cout<<"Largest amongst "<<l1.getA()<<" "<<l1.getB()<<" and "<<l1.getC()<<" is "<<l1.getLarge()<<endl;

    return 0;
}
/*OUTPUT-
Largest amongst 10 50 and 200 is 200
*/