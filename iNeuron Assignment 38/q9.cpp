/*9.Remove all consecutive duplicate elements from the list | C++ STL*/
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
    list<int> list1={1,2,3,4,4,5,6,7,7};

    cout<<"\nList elements are: "<<endl;
    displayList(list1);

    //remove all consecutive duplicate elements 
    list1.unique();
    cout<<"\nList after removing consecutive duplicate elements: "<<endl;
    displayList(list1);

    return 0;
}
/*OUTPUT-
List elements are: 
1 2 3 4 4 5 6 7 7 
List after removing consecutive duplicate elements: 
1 2 3 4 5 6 7 
*/