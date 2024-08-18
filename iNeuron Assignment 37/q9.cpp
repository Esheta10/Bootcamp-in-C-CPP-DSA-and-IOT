/*9. Write a program to Push and print elements in a float vector*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<float> v{};
    v.push_back(10.2);
    v.push_back(20.1);
    v.push_back(30.40);
    v.push_back(50.8);
    v.push_back(74.6);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
/*OUTPUT-
10.2 20.1 30.4 50.8 74.6 
*/