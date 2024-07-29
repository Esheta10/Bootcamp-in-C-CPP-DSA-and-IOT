/*2. Write a C++ program to demonstrate try, throw and catch statements.*/
#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'e';  //had it been throw 1,then answer would have been "Other exceptions caught"
    }
    catch(char e)
    {
        cout<<"\nException caught "<<e<<endl;
    }
    catch(...)
    {
        cout<<"Other exceptions caught "<<endl;
    }
    
}
/*OUTPUT-
Exception caught e */
