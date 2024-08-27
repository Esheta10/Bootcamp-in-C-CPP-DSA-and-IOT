/*3. Iterate a list C++ STL*/
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
    cout<<"\nEnter the elements of list 1: "<<endl;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);

    displayList(list1);

    return 0;
}
/*OUTPUT-
Enter the elements of list 1: 
10 20 30 40 */