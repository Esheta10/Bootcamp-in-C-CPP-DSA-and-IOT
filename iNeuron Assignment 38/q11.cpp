/*11. Creating a list by assigning the all elements of another list C++ STL*/
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
    list<int> l1={1,2,3,4,5};
    list<int> l2;
    cout<<"\nList 1 elements are: "<<endl;
    displayList(l1);
    
    l2.assign(l1.begin(),l1.end());
    cout<<"\nList 2 elements are: "<<endl;
    displayList(l2);

    return 0;
}
/*OUTPUT-
List 1 elements are:
1 2 3 4 5
List 2 elements are:
1 2 3 4 5
*/