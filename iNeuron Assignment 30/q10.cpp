/*10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/
#include<iostream>
#include<cstring>
#include<cctype>    //for isdigit and ispunct
using namespace std;

bool isValidNickname(const char *name)
{
    int length=strlen(name);

    if(length>8)
        return false;

    for(int i=0;i<length;i++)
    {
        if(isdigit(name[i]) || ispunct(name[i]) || isspace(name[i]))
            return false;
    }
    return true;
}
int main()
{
    char name[100];
    cout<<"Enter nickname: "<<endl;
    cin.getline(name, 100);

    try
    {
        if(!isValidNickname(name))
        {
            throw "Invalid Nickname";
        }
        else    
            cout<<"Valid Nickname";
    }
    catch(const char * msg)
    {
        cout<<msg<<endl;
    }
   return 0; 
}
/*OUTPUT-
Enter nickname:
Esheta
Valid Nickname

Enter nickname: 
esheta10
Invalid Nickname

*/