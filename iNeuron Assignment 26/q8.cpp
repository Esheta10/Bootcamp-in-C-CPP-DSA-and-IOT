//8. Define a class Bank and define member functions to read principal , rate of interest
//and year. Another member functions to calculate simple interest and display it.
//Initialise all details using constructor.
#include<iostream>
using namespace std;
class Bank
{
    private:
        float principal;
        float time;
        float roi;
        float simple_interest;
    public:
        Bank(float a,float b,float c)
        {
            principal=a;
            time=b;
            roi=c;
        }
        int getP()
        {
            return principal;
        }
        int getT()
        {
            return time;
        }
        int getR()
        {
            return roi;
        }
        void calculate_si()
        {
                simple_interest=(principal*time*roi)/100;
        }
        int getSI()
        {
            return simple_interest;
        }
};
int main()
{
    Bank b1(100000,5,6);

    cout<<"\nPrincipal: "<<b1.getP()<<" Time: "<<b1.getT()<<" Rate of Interest: "<<b1.getR()<<endl;
    b1.calculate_si();
    cout<<"Simple interest: "<<b1.getSI();
    return 0;
}
/*OUTPUT-
Principal: 100000 Time: 5 Rate of Interest: 6
Simple interest: 30000
*/
