/*4. Returns a constant iterator pointing to the first element of the container, that is, the
iterator cannot be used to modify, only traverse the deque.*/
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::const_iterator it;
 
    cout<<"Deque elements are: ";
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
/*OUTPUT-
Deque elements are: 1 2 3 4 5
*/