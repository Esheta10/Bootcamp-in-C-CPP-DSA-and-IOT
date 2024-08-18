/*1. Declare a vector with Initialization and print the elements.*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num={1,2,3,4,5};

    vector<int>::iterator x;

    cout<<"vector(num) elements: ";
    for(x=num.begin();x!=num.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    return 0;
}
/*OUTPUT-
1. Declare a vector with Initialization and print the elements.
*/
