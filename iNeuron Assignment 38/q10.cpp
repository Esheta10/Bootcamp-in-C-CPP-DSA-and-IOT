/*10. Merge two lists C++ STL*/
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
    list<int> list1={1,2,3,4,5};
    list<int> list2={10,9,8,7,6};

    cout<<"List 1 elements are: "<<endl;
    displayList(list1);

    cout<<"\nList 2 elements are: "<<endl;
    displayList(list2);

    list1.merge(list2);

    cout<<"\nMerged lists are: "<<endl;
    displayList(list1);

    return 0;
}
/*OUTPUT-
List 1 elements are: 
1 2 3 4 5 
List 2 elements are: 
10 9 8 7 6 
Merged lists are:    
1 2 3 4 5 10 9 8 7 6 
*/