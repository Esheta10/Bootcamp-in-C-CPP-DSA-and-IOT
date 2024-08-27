/*1. List functions in C++ STL (Standard Template Library)*/
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
    list<int> ilist;
    if(ilist.empty())
    {
        cout<<"List is empty";
    }
    else
    {
        cout<<"List is not empty";
    }
        ilist.push_front(10);
        ilist.push_front(20);
        ilist.push_front(30);
        ilist.push_back(70);
        ilist.push_back(80);
        ilist.push_back(90);

        cout<<"\nList elements after push_front(),push_back(): "<<endl;
        displayList(ilist); 

    list<int>::iterator it;
    it=ilist.begin();
    ilist.insert(it,100);
    ilist.insert(it,200);
    ilist.insert(it,300);

    cout<<"\nList elements after insert()"<<endl;
    displayList(ilist);

    cout<<"\nSize of the list: "<<ilist.size()<<endl;

    cout<<"List elements after sort: "<<endl;
    ilist.sort();
    displayList(ilist);

    cout<<"\nList elements after reverse(): "<<endl;
    ilist.reverse();
    displayList(ilist);

    cout<<"\nList elements after remove() : "<<endl;
    ilist.remove(30);
    displayList(ilist);

    cout<<"\nFirst(front) of the list: "<<ilist.front()<<endl;
    cout<<"Last(back) of the list: "<<ilist.back()<<endl;

    cout<<"List elements after pop_front() and pop_back(): "<<endl;
    ilist.pop_front();
    ilist.pop_back();
    displayList(ilist);

    list<int>::iterator i;
    cout<<"\nList elements using begin() and end(): "<<endl;
    for(i=ilist.begin();i!=ilist.end();i++)
    {
        cout<<*i<<" ";
    }

    list<int>::reverse_iterator ri;
    cout<<"\nList elements using rbegin() and rend(): "<<endl;
    for(ri=ilist.rbegin();ri!=ilist.rend();ri++)
    {
        cout<<*ri<<" ";
    }

    list<int> list2;
    list2.assign(5,100);
    cout<<"\nList 2 elements after assign(): "<<endl;
    displayList(list2);

    ilist.merge(list2);
    cout<<"\nList elements after merge(): "<<endl;
    displayList(ilist);

    ilist.unique();
    cout<<"\nList elements after unique: "<<endl;
    displayList(ilist);

    it=ilist.begin();
    ilist.erase(it);
    cout<<"\nList elements after erase(): "<<endl;
    displayList(ilist);

    return 0;
}
/*OUTPUT-
List is empty
List elements after push_front(),push_back(): 
30 20 10 70 80 90 
List elements after insert()
100 200 300 30 20 10 70 80 90 
Size of the list: 9
List elements after sort: 
10 20 30 70 80 90 100 200 300 
List elements after reverse(): 
300 200 100 90 80 70 30 20 10 
List elements after remove() : 
300 200 100 90 80 70 20 10 
First(front) of the list: 300
Last(back) of the list: 10
List elements after pop_front() and pop_back():
200 100 90 80 70 20
List elements using begin() and end():
200 100 90 80 70 20
List elements using rbegin() and rend(): 
20 70 80 90 100 200
List 2 elements after assign(): 
100 100 100 100 100
List elements after merge(): 
100 100 100 100 100 200 100 90 80 70 20
List elements after unique:
100 200 100 90 80 70 20
List elements after erase():
200 100 90 80 70 20
*/

    