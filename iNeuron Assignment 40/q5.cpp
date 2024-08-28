/*5. Returns the maximum number of elements that a deque container can hold.*/
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::iterator it;

    cout<<"Deque elements are: "<<endl;
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\nMaximum size of deque is: "<<dq.max_size();

    return 0;
}
/*output-
Deque elements are: 
1 2 3 4 5 
Maximum size of deque is: 1073741823
*/