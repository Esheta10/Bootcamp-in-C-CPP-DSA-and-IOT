/*2. Declare a vector without initialization,insert some elements and print*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num={};
    num.push_back(100);
    num.push_back(200);
    num.push_back(300);
    num.push_back(400);
    num.push_back(500);

    vector<int>::iterator x;
    for(x=num.begin();x!=num.end();x++)
    {
        cout<<*x<<" ";        
    }

    return 0;
}
/*OUTPUT-
100 200 300 400 500 
*/