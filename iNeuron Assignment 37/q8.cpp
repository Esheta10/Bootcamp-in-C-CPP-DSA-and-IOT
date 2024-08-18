/*8. Write a program to find common elements between two vectors.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5};
    vector<int> v2={5,2,3,1,8};

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector<int> v3(v1.size()+v2.size());

    vector<int>::iterator x,end;

    end=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

    for(x=v3.begin();x!=end;x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    return 0;
}
/*OUTPUT-
1 2 3 5 

The set_intersection function in C++ is used to find the common elements between two sorted ranges. It takes two input ranges, finds their intersection, and writes the result to a specified output iterator.
*/