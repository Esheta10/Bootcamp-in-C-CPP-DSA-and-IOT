/*7. Insert the element at beginning and end of the list | C++ STL*/
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
    list<int> list1;

    list1.push_front(30);
    list1.push_front(20);
    list1.push_front(10);
    list1.push_back(40);
    list1.push_back(50);

    displayList(list1);

    return 0;
}
/*OUTPUT-
10 20 30 40 50*/