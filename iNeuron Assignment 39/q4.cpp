/*4. Write a program to reverse forward list elements.*/
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    int sum=0;
    //declaring forward list
    forward_list<int> myforward_list;

    //assigning values using assign
    myforward_list.assign({1,2,3,4,4,5,6,7,7,8,8,9});
    while(!myforward_list.empty())  //Implementation of forward list using queue
    {
        sum = sum + myforward_list.front();
        myforward_list.pop_front();
    }
    cout<<"Sum is :"<<sum;

    return 0;
}
/*OUTPUT-
Sum is :64
*/