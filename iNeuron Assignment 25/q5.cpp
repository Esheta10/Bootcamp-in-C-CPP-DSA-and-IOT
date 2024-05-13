//5. Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class.
#include<iostream>
using namespace std;
class Reverse
{
    private:
        int n;
        int rev=0;
    public:
        void setN(int x)
        {
            n=x;
        }
        int getN()
        {
            return n;
        }
        void calculateReverse()
        {
            int rem;
            int temp=n;
            while(n!=0)
            {
                rem=n%10;
                rev=rev*10+rem;
                n=n/10;
            }
            n=temp;
        }
        int getRev()
        {
            return rev;
        }
};
int main()
{
    Reverse r1;
    r1.setN(1234);
    r1.calculateReverse();

    cout<<"Reverse of "<<r1.getN()<<" is "<<r1.getRev()<<endl;

    return 0;
}
/*OUTPUT-
Reverse of 1234 is 4321
*/