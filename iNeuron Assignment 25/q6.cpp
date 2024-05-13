//6. Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.
#include<iostream>
using namespace std;
class Square
{
    private:
        int n;
        int square;
    public:
        static int count;
        void setX(int x)
        {
            n=x;
        }
        int getX()
        {
            return n;
        }
        void calculateSquare()
        {
            square=n*n;
            count++;
        }
        int getSquare()
        {
            return square;
        }
};
int Square::count=0;
int main()
{
    Square s1,s2;
    s1.setX(5);
    s1.calculateSquare();
    s2.setX(6);
    s2.calculateSquare();


    cout<<"Square of "<<s1.getX()<<" is "<<s1.getSquare()<<endl;
    cout<<"Square of "<<s2.getX()<<" is "<<s2.getSquare()<<endl;

    cout<<"The function is called "<<Square::count<<" times"<<endl;

    return 0;
}
/*OUTPUT-
Square of 5 is 25
Square of 6 is 36
The function is called 2 times
*/