/*8. Remove all occurrences of an element and remove set of some specific from the list
C++ STL*/
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l={1,2,3,4,5,6,2,7,8};

    list<int>::iterator it;
    cout<<"List elements are: "<<endl;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }

    l.remove(2);
    cout<<"\nAfter removing 2,elements are: "<<endl;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
}
/*OUTPUT-
List elements are: 
1 2 3 4 5 6 2 7 8 
After removing 2,elements are: 
1 3 4 5 6 7 8 
//remove() jitni baar bhi element aaya hoga usko delete kar dega but erase(it) keval usi location ke element ko delete karega jiska humne iterator rakha hai.
*/
