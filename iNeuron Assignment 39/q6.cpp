/*6. Create two forward lists of int type, and merge them.*/
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
    cout<<"Elements of first forward list are: "<<endl;
    displayList(f1);

    f2.assign({9,7,8,1,3,4,2,5});
    cout<<"\nElements of second forward list are: "<<endl;
    displayList(f2);

    f1.merge(f2);
    cout<<"\nElements of merged list are: "<<endl;
    displayList(f1);

    return 0;
}
/*OUTPUT-
Elements of first forward list are:  
1 2 3 4 5 6 7 
Elements of second forward list are: 
9 7 8 1 3 4 2 5 
Elements of merged list are:         
1 2 3 4 5 6 7 9 7 8 1 3 4 2 5    
*/