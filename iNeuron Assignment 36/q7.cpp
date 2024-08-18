/*7. Sort an array in ascending order using sort() function in C++ STL*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={89,34,1,8,23,4};

    int size=sizeof(arr)/sizeof(int);

    sort(arr,arr+size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*OUTPUT-
1 4 8 23 34 89 
*/