/*1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/
#include<iostream>
using namespace std;
void test(int num)
{
    char * c ="String Handling";
    try
    {
        if(num>=0  && num<=9)
            throw num;
        else    
            cout<<"It is not a single digit number ";    
        throw c;
    }
    catch(int a)
    {
        cout<<"It is a single digit number : "<<a<<endl;
    }
    catch(char b[100])
    {
        cout<<b;
    }
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    test(num);
    return 0;
}
/*OUTPUT-
Enter a number: 1
It is a single digit number : 1

Enter a number: 567
It is not a single digit number String Handling
*/
