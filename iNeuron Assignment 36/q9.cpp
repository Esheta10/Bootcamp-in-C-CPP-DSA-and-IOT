/*9. C++ program to find the integers which come an odd number of times in an array
using C++ STL.======google level question=====*/
#include<iostream>
#include<array>
using namespace std;
int oddInteger(array <int,5> a)
{
    int result=0;
    for(int i=0;i<a.size();i++)
    {
        result=result^a[i];
    }
    return result;
}
int main()
{
    array<int,5> a={1,4,4,9,1};
    int result=oddInteger(a);
    cout<<result<<endl;
    return 0;
}
/*OUTPUT-
9
*/