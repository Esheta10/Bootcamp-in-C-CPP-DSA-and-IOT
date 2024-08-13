/*7. Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix.*/
#include<bits/stdc++.h>
using namespace std;

class Matrix
{
    protected:
        int a[2][2];
    public:
        void set_data()
        {
            cout<<"Enter the elements of matrix: "<<endl;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cin>>a[i][j];
                }
            }
        }
        virtual void display()=0;
};
class Determinant:public Matrix
{
   private:
    int A;
    public:
        int calculate_determinant()
        {
            A=a[0][0]*a[1][1]-a[0][1]*a[1][0];
            if(A<0)
            return -A;
            else
            return A;
        }
        void display()
        {
            cout<<"Matrix is : "<<endl;
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Determinant of the given matrix is: "<<calculate_determinant()<<endl;
        }
};
int main()
{
    Determinant d;
    d.set_data();
    d.display();

    return 0;
}
/*OUTPUT-
Enter the elements of matrix: 
1
2
3
4
Matrix is : 
1 2 
3 4 
Determinant of the given matrix is: 2
*/