/*10. Write a program to assign values in forward_list using the values of another list*/
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

    f1.assign({1,2,3,4,5,6,7});
    cout<<"Elements of forward list f1 are: "<<endl;
    displayList(f1);

    f2.assign(f1.begin(),f1.end());
    cout<<"\nElements of forward list f2 are: "<<endl;
    displayList(f2);

    return 0;
}
/*OUTPUT-
Elements of forward list f1 are: 
1 2 3 4 5 6 7 
Elements of forward list f2 are: 
1 2 3 4 5 6 7 
*/