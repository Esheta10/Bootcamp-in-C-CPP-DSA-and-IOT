/*1. Write a c++ code, to demonstrate the forward list.*/
#include<iostream>
#include<forward_list>
using namespace std;

void displayList(forward_list<int> l)
{
    forward_list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    forward_list<int> f1;
    forward_list<int> f2;
    forward_list<int> f3;

    cout<<"\nForward list of f1 is: "<<endl;
    f1.assign({4,2,1,3,5,6,6,7,8,9,1,2});
    displayList(f1);

    cout<<"\nForward list of f2 is: "<<endl;
    f2.assign(5,100);
    displayList(f2);

    cout<<"\nForward list of f3 is: "<<endl;
    f3.assign(f1.begin(),f1.end());
    displayList(f3);


    f3.unique();
    cout<<"\nUnique elements of f3 are: "<<endl;
    displayList(f3); 

    
    f3.sort();
    cout<<"\nSorted elements of f3 are: "<<endl;
    displayList(f3); 

    f3.erase_after(f3.begin());
    cout<<"\nElements after erasing are: "<<endl;
    displayList(f3); 

    cout<<"\nMerging of 2 lists f1 & f2: "<<endl;
    f1.merge(f2);
    displayList(f1);


    return 0;
}
/*OUTPUT-
Forward list of f1 is:     
4 2 1 3 5 6 6 7 8 9 1 2    
Forward list of f2 is:     
100 100 100 100 100        
Forward list of f3 is:     
4 2 1 3 5 6 6 7 8 9 1 2    
Unique elements of f3 are: 
4 2 1 3 5 6 7 8 9 1 2      
Sorted elements of f3 are: 
1 1 2 2 3 4 5 6 7 8 9      
Elements after erasing are:
1 2 2 3 4 5 6 7 8 9 
Merging of 2 lists f1 & f2:
4 2 1 3 5 6 6 7 8 9 1 2 100 100 100 100 100 
*/