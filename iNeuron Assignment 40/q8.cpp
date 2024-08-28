/*8. Remove elements from a container from the specified position or range in deque.*/
#include<iostream>
#include<deque>
using namespace std;

void displayQueue(deque<int> dq)
{
    deque<int>::iterator it;
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    deque<int> dq1={1,2,3,4,5};
    cout<<"Deque elements are: "<<endl;
    displayQueue(dq1);
    
    // Remove the element at position 4 (0-based index)
    cout<<"\nDeque elements after removing element at 4th position: "<<endl;
    dq1.erase(dq1.begin()+4);
    displayQueue(dq1);
    
    //Removing a range of elements eg: from position 1 to 3
    dq1.erase(dq1.begin()+1,dq1.begin()+3);
    cout<<"\nDeque elements after removing elements in range of 1 to 3: "<<endl;
    displayQueue(dq1);
    return 0;
}
/*OUTPUT-
Deque elements are: 
1 2 3 4 5 
Deque elements after removing element at 4th position:     
1 2 3 4 
Deque elements after removing elements in range of 1 to 3: 
1 4 
*/