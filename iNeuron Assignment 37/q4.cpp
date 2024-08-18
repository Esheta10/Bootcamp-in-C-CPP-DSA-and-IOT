/*4. Write a program to Copy one vector’s elements to another vector.*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5};
    vector<int> v2(v1);

    v2.assign(v1.begin(),v1.end());

    cout<<"v1 elements "<<endl;
    for(int i=0;i<v1.size();i++)
    {   
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"v2 elements "<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    return 0;
}
/*OUTPUT-
v1 elements 
1 2 3 4 5   
v2 elements 
1 2 3 4 5  
*/