/*6. Assign values to the same or different deque container.*/
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
    deque<int> dq1;
    deque<int> dq2;
    deque<int> dq3;

    cout<<"Elements of dq1 are: "<<endl;
    dq1.assign({1,2,3,4,5});
    displayQueue(dq1);

    cout<<"\nElements of dq2 are: "<<endl;
    dq2.assign(5,100);
    displayQueue(dq2);

    cout<<"\nElements of dq3 are: "<<endl;
    dq3.assign(dq1.begin(),dq1.end());
    displayQueue(dq3);

    return 0;
}
/*output-
Elements of dq1 are: 
1 2 3 4 5 
Elements of dq2 are: 
100 100 100 100 100 
Elements of dq3 are: 
1 2 3 4 5 
*/