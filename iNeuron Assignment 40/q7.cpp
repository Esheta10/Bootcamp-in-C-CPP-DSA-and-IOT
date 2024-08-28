/*7. Return the first element and last element of the deque container.*/
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::iterator it;
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\nFirst element of deque: "<<dq.front()<<endl;
    cout<<"Last element of deque: "<<dq.back()<<endl;

    return 0;
}
/*OUTPUT-
1 2 3 4 5 
First element of deque: 1
Last element of deque: 5
*/