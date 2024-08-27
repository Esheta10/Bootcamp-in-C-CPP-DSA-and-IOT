/*9. Write a C++ code to demonstrate working of splice_after() in forward list.*/
/*The splice_after() function in C++ is a member function of the std::forward_list container, which is part of the Standard Template Library (STL). It is used to transfer elements from one std::forward_list to another, or within the same list, but only after a specified position.

Purpose:
splice_after() efficiently moves elements from one std::forward_list to another or within the same list. The operation is constant time (O(1)) because it simply changes pointers without copying or moving the actual elements.*/
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

    f1.assign({1,2,3,4,5});
    cout<<"Elements of forward list 1 are: "<<endl;
    displayList(f1);

    f2.assign({9,8,7,6,5});
    cout<<"\nElements of forward list 2 are: "<<endl;
    displayList(f2);

    f2.splice_after(f2.begin(),f1,f1.before_begin(),f1.end());
    cout<<"\nElements after splicing are: "<<endl;
    displayList(f2);

    return 0;
}
/*OUTPUT-
Elements of forward list 1 are: 
1 2 3 4 5 
Elements of forward list 2 are: 
9 8 7 6 5 
Elements after splicing are: 
9 1 2 3 4 5 8 7 6 5 
*/