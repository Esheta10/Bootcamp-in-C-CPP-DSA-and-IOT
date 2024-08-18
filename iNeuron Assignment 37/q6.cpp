/*6. Write a program to reverse vector elements*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1{10,20,30,40,50};
    cout<<"Before reversing,vector elements are: ";
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    reverse(v1.begin(),v1.end());

    cout<<"After reversing,vector elements are: ";
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
/*OUTPUT-
Before reversing,vector elements are: 10 20 30 40 50 
After reversing,vector elements are: 50 40 30 20 10 
*/