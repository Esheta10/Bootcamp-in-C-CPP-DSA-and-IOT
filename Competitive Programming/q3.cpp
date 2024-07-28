/*An array arr a mountain if the following properties hold:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr , return the index i such that arr[0] < arr[1] < ... < arr[i -
1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] .
You must solve it in O(log(arr.length)) time complexity.*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[7]={0,4,7,10,10,3,1};
    int ans=0,start=0,end=6,mid=(start+end)/2;
    while(start<end)
    {
        if(a[mid]>a[mid+1])
        {
            //left side search
            if(a[mid-1]<=a[mid])
            {
                ans=mid;    //Here,ans=4
                break;
            }
            end=mid;
        }
        else
        {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    cout<<a[ans];//This gives value at 4th position which is 10
    return 0;

}
/*OUTPUT-
10
*/