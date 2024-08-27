/*3. Create a forward list insert elements from 1 to 10 and find the sum of elements.*/
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> flist;
    for(int i=0;i<=10;i++)
    {
        flist.push_front(i);
    }
    int sum=0;
    for(auto i:flist)
    {
        sum=sum+i;
    }
    cout<<"Sum is: "<<sum<<endl;

    return 0;
}
/*OUTPUT-
Sum is: 55
*/