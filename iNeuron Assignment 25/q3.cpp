//3. Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.
#include<iostream>
using namespace std;
class Factorial
{
    private:
        int n;
        int fact;
    public:
        void setN(int x)
        {
            n=x;
        }
        int getN()
        {
            return n;
        }
        void calculateFactorial()
        {
           int f=1,i;
           if(n<=0)
           {
                fact=1;
                return;
           }
            for(int i=1;i<=n;i++)
                f=f*i;

            fact=f;
        }
        int getfactorial()
        {
            return fact;
        }
};
int main()
{
    Factorial f;
    f.setN(5);
    f.calculateFactorial();

    cout<<"Factorial of "<<f.getN()<<" is "<<f.getfactorial()<<endl;
    return 0;
}
/*OUTPUT-
Factorial of 5 is 120
*/