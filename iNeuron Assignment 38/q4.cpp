/*4. Iterate a list in reverse order C++ STL*/
#include<iostream>
#include<list>
using namespace std;

void displayList(list<int> l)
{
    list<int>::reverse_iterator ri;
    for(ri=l.rbegin();ri!=l.rend();ri++)
    {
        cout<<*ri<<" ";
    }
}
int main()
{
    list<int> List1;
    cout<<"Enter the elements of list 1 using rbegin() and rend(): "<<endl;
    List1.push_back(10);
    List1.push_back(20);
    List1.push_back(30);
    List1.push_back(40);

    displayList(List1);

    return 0;
}
/*output-
Enter the elements of list 1 using rbegin() and rend(): 
40 30 20 10 
*/