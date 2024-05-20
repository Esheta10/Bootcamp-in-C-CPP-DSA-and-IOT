/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        void accept();
        void display();
        Matrix operator+(Matrix m)
        {
            int mat[3][3];
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    mat[i][j]=a[i][j] + m.a[i][j];
                }
            }
            cout<<"\nSum of 2 matrices is: \n";
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
};
void Matrix::accept()
{
    cout<<"\nEnter matrix values (3x3): \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
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
int main()
{
    Matrix m1,m2,m3;
    m1.accept();
    cout<<"\n The first matrix is: \n";
    m1.display();

    m2.accept();
    cout<<"\n The second matrix is: \n";
    m2.display();

    m3=m1 + m2;

    return 0;
}
/*Enter matrix values (3x3): 
 1 2 3 4 5 6 7 8 9
        
 The first matrix is: 
 1       2       3
 4       5       6
 7       8       9

Enter matrix values (3x3): 
 9 8 7 6 5 4 3 2 1 
        
 The second matrix is:
 9       8       7
 6       5       4
 3       2       1

Sum of 2 matrices is:
10      10      10
10      10      10
10      10      10
*/