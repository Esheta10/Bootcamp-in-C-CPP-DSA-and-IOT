/*12. Assign a list with array elements C++ STL*/
#include<iostream>
#include<list>
using namespace std;

void displayList(list<int> l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    list<int> l;

    int arr[]={1,2,3,4,5};
    l.assign(arr,arr+5);
    displayList(l);

    return 0;
}
/*OUTPUT-
1 2 3 4 5
*/