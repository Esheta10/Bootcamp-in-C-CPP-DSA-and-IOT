/*3. Find the first and last element using the STL array.*/
#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> values {1,2,3,4,5};

    //using operator[]
    cout<<"First element: "<<values[0]<<endl;
    cout<<"Last element:  "<<values[values.size()-1]<<endl;

    //using front() and back() function
    cout<<"First element: "<<values.front()<<endl;
    cout<<"Last element:  "<<values.back()<<endl;

    return 0;
}
/*OUTPUT-
First element: 1
Last element:  5
First element: 1
Last element:  5
*/