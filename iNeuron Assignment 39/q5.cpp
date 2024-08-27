/*5. Write a program remove all consecutive duplicate elements from the forward list*/
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

    cout<<"Elements of forward list f1 are: "<<endl;
    f1.assign({1,2,3,4,5,5,6,6,7,8,9,9});
    displayList(f1);

    f1.unique();
    cout<<"\nAfter removing,consecutive duplicates elements of forward list are: "<<endl;
    displayList(f1);

    return 0;

}
/*OUTPUT-
Elements of forward list f1 are: 
1 2 3 4 5 5 6 6 7 8 9 9 
After removing,consecutive duplicates elements of forward list are: 
1 2 3 4 5 6 7 8 9 
*/