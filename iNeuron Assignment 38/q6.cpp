/*6. Get the first and last element of the list C++ STL*/
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
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    displayList(list1);

    cout<<"\nElement at front: "<<list1.front()<<endl;
    cout<<"Element at the end: "<<list1.back()<<endl;

    return 0;

}
/*OUTPUT-
10 20 30 40 
Element at front: 10
Element at the end: 40
*/