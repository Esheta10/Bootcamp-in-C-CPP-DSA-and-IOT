/*2. Write a c++ code, in which create a forward list and assign values to it at the time of
initialization and print it on the console screen.*/
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> flist1;
    forward_list<int> flist2;
    forward_list<int> flist3;

    flist1.assign({1,2,3,4,4,5,6,6,7,8,9});
    cout<<"Elements of forward list 1 are: "<<endl;
    for(auto i:flist1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    flist2.assign(5,100);
    cout<<"Elements of forward list 2 are: "<<endl;
    for(auto i: flist2)
    {
        cout<<i<<" ";
    }

    flist3.assign(flist1.begin(),flist1.end());
    cout<<"\nElements of forward list 3 are: "<<endl;
    for(auto i: flist3)
    {
        cout<<i<<" ";
    }

    return 0;
}
/*OUTPUT-
Elements of forward list 1 are: 
1 2 3 4 4 5 6 6 7 8 9 
Elements of forward list 2 are: 
100 100 100 100 100 
Elements of forward list 3 are: 
1 2 3 4 4 5 6 6 7 8 9 
*/