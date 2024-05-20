/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.*/
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        void accept();
        void display();
        void operator-();   // overload '-' unary operator
};
void Matrix::accept()   //accepting values from the user
{
    cout<<"\n Enter matrix elements (3x3) : \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix::display()  //function for displaying the matrix
{
    cout<<"\nMatrix is: \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix::operator-()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
    }
}
int main()
{
    Matrix m;
    m.accept();
    m.display();    //displaying matrix
    -m;             //calling overloaded unary operator
    m.display();    //displaying negated numbers stored in the matrix

    return 0;
}
/*OUTPUT-
 Enter matrix elements (3x3) : 
 1
 2
 3
 4
 5
 6
 7
 8
 9

Matrix is:
 1       2       3 
 4       5       6 
 7       8       9 

Matrix is:
 -1      -2      -3
 -4      -5      -6
 -7      -8      -9
*/
 
