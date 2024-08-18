/*4. Returns the element from the given index using the STL array.*/
#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main()
{
    array<int,5> arr={90,80,70,60,50};

    cout<<"0th element: "<<arr.at(0)<<endl;
    //get<key>(object)
    cout<<"4th element: "<<get<3>(arr)<<endl;

    return 0;
}
/*OUTPUT-
0th element: 90
4th element: 60
*/