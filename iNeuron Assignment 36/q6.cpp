/*6. Using STL to check whether an array is empty or not.*/
#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,0> arr1 {};
    array<int,5> arr2 {};
    array<int,5> arr3 {1,2,3};
    array<int,5> arr4 {1,2,3,4,5};

    cout<<"arr1.empty(): "<<arr1.empty()<<endl;
    cout<<"arr2.empty(): "<<arr2.empty()<<endl;
    cout<<"arr3.empty(): "<<arr3.empty()<<endl;
    cout<<"arr4.empty(): "<<arr4.empty()<<endl;

    if(arr1.empty())
        cout<<"Array is empty"<<endl;
    else
        cout<<"Array is not empty"<<endl;

    if(arr2.empty())
        cout<<"Array is empty"<<endl;
    else
        cout<<"Array is not empty"<<endl;
    
    if(arr3.empty())
        cout<<"Array is empty"<<endl;
    else
        cout<<"Array is not empty"<<endl;
    
    if(arr4.empty())
        cout<<"Array is empty"<<endl;
    else
        cout<<"Array is not empty"<<endl;

    return 0;
}
/*OUTPUT-
arr1.empty(): 1
arr2.empty(): 0
arr3.empty(): 0
arr4.empty(): 0
Array is empty
Array is not empty
Array is not empty
Array is not empty
*/