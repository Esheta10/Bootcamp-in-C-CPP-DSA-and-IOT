/*9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string email="prateek@gmail.com";
    string gmail="@gmail.com";
    try
    {
    if(email.find("@gmail.com") != -1)
        {
            cout<<"Valid Gmail id"<<endl;
        }
        else 
            throw 1;
    }
    catch(int)
    {
     cout<<"Invalid Gmail id"<<endl;
    }
    return 0;
}
/*Output-
Valid Gmail id
*/