/*2. Returns a reverse iterator which points to the last element of the deque (i.e., its
reverse beginning).*/
#include<iostream>
#include<iterator>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq={1,2,3,4,5};

    deque<int>::iterator it;
    cout<<"Deque in reverse order: "<<endl;
    for(auto it=dq.rbegin();it!=dq.rend();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
/*output-
Deque in reverse order: 
5 4 3 2 1 
*/