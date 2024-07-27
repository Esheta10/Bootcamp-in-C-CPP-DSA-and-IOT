/*3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/
#include<iostream>
using namespace std;
class Array
{
    private:
        int a[100];
        const int size=100;
    public:
        Array(int n,int index)
        {
            if(index>=size)
            {
                cout<<"Array index out of Bound Exception"<<endl;
                exit(0);
            }
            a[index]=n;
        }
        int operator[](int index)
        {
             if(index>=size)
            {
                cout<<"\nArray index out of Bound Exception"<<endl;
                exit(0);
            }
            return a[index];
        }
        void display(int index)
        {
            cout<<a[index];
        }

};
int main()
{
    Array b(5,10);
    b.display(10);
    cout<<b[100];
    
    return 0;
}
/*OUTPUT-
5
Array index out of Bound Exception
*/