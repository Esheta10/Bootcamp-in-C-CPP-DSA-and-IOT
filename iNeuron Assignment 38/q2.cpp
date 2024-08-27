/*2. Assign the elements to the list (different methods) - Example of list::assign() | C++
STL*/
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
   list<int> list2;
   list<int> list3;

   //assigning 100 to 5 elements
   list1.assign(5,100);
   cout<<"\nSize of the list 1: "<<list1.size();
   cout<<"\nElements of list 1: ";
   displayList(list1);

   //assigning all elements of list1 to list2
   list2.assign(list1.begin(),list1.end());
   cout<<"\nSize of the list 2: "<<list2.size();
   cout<<"\nElements of list 2: ";
   displayList(list2);

   //assigning list by array elements
   int arr[]={10,20,30,40};
   list3.assign(arr,arr+4);
   cout<<"\nSize of the list 3: "<<list3.size();
   cout<<"\nElements of list 3 are: ";
   displayList(list3);

    return 0;
}
/*OUTPUT-
Size of the list 1: 5
Elements of list 1: 100 100 100 100 100 
Size of the list 2: 5
Elements of list 2: 100 100 100 100 100 
Size of the list 3: 4
Elements of list 3 are: 10 20 30 40 
*/