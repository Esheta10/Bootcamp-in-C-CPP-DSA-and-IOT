/*5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions.*/
#include<iostream>
#include<array>
#include<iterator>
using namespace std;

int main()
{
    array<int,5> values={20,40,60,80,100};
    array<string,5> cities={"Goa","Pune","Delhi","Agra","Kochi"};

    cout<<"String elements are: "<<endl;
    for(auto i=cities.rbegin(); i!=cities.rend(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<"\nArray elements are: "<<endl;
    for(auto it=values.rbegin(); it!=values.rend();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\nArray elements are: "<<endl;
    for(auto it=values.rend()-1; it!=values.rbegin()-1;it--)
    {
        cout<<*it<<" ";
    }

    return 0;
}
/*OUTPUT-
String elements are: 
Kochi Agra Delhi Pune Goa 
Array elements are: 
100 80 60 40 20 
Array elements are: 
20 40 60 80 100 
*/