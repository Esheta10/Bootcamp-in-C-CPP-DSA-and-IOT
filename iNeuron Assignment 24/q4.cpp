//4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    if(n<=0)
        return 1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int k=0;
            if(j==0)
                while(k++ <= (n/2-i+1))
                cout<<" ";

                cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*OUTPUT-
Enter a number: 
5
    1 
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/