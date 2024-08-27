/*8. Create two forward lists of int type, and swap the elements of both forward lists with
each other.*/
#include<iostream>
#include<forward_list>
using namespace std;

void displayList(forward_list<int> flist)
{
    forward_list<int>::iterator it;
    for(it=flist.begin();it!=flist.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    forward_list<int> f1;
    forward_list<int> f2;

    cout<<"Elements of first forward list are: "<<endl;
    f1.assign({1,2,3});
    displayList(f1);

    
    cout<<"\nElements of second forward list are: "<<endl;
    f2.assign({4,5,6});
    displayList(f2);

    f1.swap(f2);
    cout<<"\nAfter swapping,elements of list f1 are: "<<endl;
    displayList(f1);

    cout<<"\nAfter swapping,elements of list f2 are: "<<endl;
    displayList(f2);

    return 0;
}
/*OUTPUT-
Elements of first forward list are: 
1 2 3 
Elements of second forward list are: 
4 5 6 
After swapping,elements of list f1 are: 
4 5 6 
After swapping,elements of list f2 are: 
1 2 3 
*/
