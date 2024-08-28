/*1. Inserts an element. And returns an iterator that points to the first of the newly inserted
elements.*/
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq={1,2,3,4,5};

    deque<int>::iterator it =  dq.begin();
    ++it;

    it=dq.insert(it,100);   //1 100 2 3  4 5 

    cout<<"Deque contains: ";
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}
/*output:
Deque contains: 1 100 2 3 4 5 
*/