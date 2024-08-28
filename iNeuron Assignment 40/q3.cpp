/*3. Returns a reverse iterator which points to the position before the beginning of the
deque (which is considered its reverse end).*/
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq={10,20,30,40,50};
    deque<int>::iterator it;

    cout<<"Deque elements in reverse order are: "<<endl;
    for(auto it=dq.rbegin();it!=dq.rend();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
/*output-
Deque elements in reverse order are: 
50 40 30 20 10 
*/