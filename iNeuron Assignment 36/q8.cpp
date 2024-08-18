/*8. Sort an array in descending order using sort() function in C++ STL*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={89,45,1,45,100,23};

    int size=sizeof(arr)/sizeof(int);

    sort(arr,arr+size,greater<>());

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*OUTPUT-
100 89 45 45 23 1 
*/