/*7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/
#include<iostream>
#include<cstring>
#include<cctype>// Use <cctype> for character classification functions like isdigit
using namespace std;
int main()
{
    char username[100];
    char password[20];

    cout<<"Enter username: "<<endl;
    cin>>username;
    cout<<"Enter password: "<<endl;
    cin>>password;

    try
    {
        if(strlen(password) < 6)
        {
            cout<<"Password must be at least 5 characters long";
            throw 'c';
        }
        bool digit_yes=false;
        bool valid;
        int len=strlen(password);
        for(int count=0;count<len;count++)
        {

            if(isdigit(password[count]))
                digit_yes=true;
        }
            if (!digit_yes)
            {
                valid=false;
                cout<<"Password must have at least one digit(0-9)";
                throw 'c';
            }
            else
            {
                valid=true;
                cout<<"Password is correct";
            }
    }
    catch(char c)
    {
        cout<<"Invalid password"<<endl;
    }
    return 0;
}
/*OUTPUT-
Enter username: 
Esheta
Enter password: 
esh123
Password is correct
*/