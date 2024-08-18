/*10. Write a program to check whether an element exists in a vector or not.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int element;
    vector<int> v1{1,2,3,4,5};

    cout<<"Enter the element to be searched: ";
    cin>>element;

    vector<int>::iterator it = find(v1.begin(),v1.end(),element);
    if(it!=v1.end())
    {
        cout<<"Element "<<element<<" found at position ";
        cout<<it-v1.begin()+1<<endl;
    }
    else
    {
        cout<<"Element "<<element<<" does not exist"<<endl;
    }

    return 0;
}
/*OUTPUT-
Enter the element to be searched: 4
Element 4 found at position 4
*/