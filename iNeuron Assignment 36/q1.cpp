/*1. Using STL Array gets and sets a reference to an element based on a given index.*/
#include<array>
#include<iostream>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};
    array<char,10> charArray {'e','s','h','e','t','a'};

    //printing elements
    cout<<"element at index 0: "<<values[0]<<endl;
    cout<<"element at index 1: "<<values[1]<<endl;
    cout<<"element at index 2: "<<values[2]<<endl;
    cout<<"element at index 3: "<<values[3]<<endl;
    cout<<"element at index 4: "<<values[4]<<endl;

    //changing some of the values
    values[0]=100;
    values[4]=400;

    //printing all elements
   /* for(int i=0;i<values.size();i++)
    {
        cout<<values[i]<<" ";
    }
    cout<<endl; */

    for(int i:values)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(char c: charArray)
    {
        cout<<c<<" ";
    }
    cout<<endl;

    return 0;
}
/*OUTPUT-
element at index 0: 10
element at index 1: 20
element at index 2: 30
element at index 3: 40
element at index 4: 50
100 20 30 40 400
e s h e t a 
*/