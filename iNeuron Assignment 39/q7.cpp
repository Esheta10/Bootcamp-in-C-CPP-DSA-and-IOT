/*7. Below are two forward lists, first sort them and then merge them.
forwardlist1={3,2,9}
forwardlist2={8,1,2}*/
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
    forward_list<int> forwardlist1;
    forward_list<int> forwardlist2;

    forwardlist1.assign({3,2,9});
    cout<<"Elements of first forward list are: "<<endl;
    displayList(forwardlist1);

    forwardlist2.assign({8,1,2});
    cout<<"\nElements of second forward list are: "<<endl;
    displayList(forwardlist2);

    forwardlist1.sort();
    forwardlist2.sort();

    forwardlist1.merge(forwardlist2);
    cout<<"\nMerged and sorted list elements are: "<<endl;
    displayList(forwardlist1);

    return 0; 
}
/*OUTPUT-
Elements of first forward list are: 
3 2 9 
Elements of second forward list are: 
8 1 2 
Merged and sorted list elements are: 
1 2 2 3 8 9 */
