/*8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char password[50];
    cout<<"Enter password: "<<endl;
    cin>>password;

    bool digit=false,symbol=false,capital=false;
    int count=strlen(password)-1;
   
    
         for(int i=0;password[i];i++)
        {
        if(password[i]>='0' && password[i]<='9')
            digit=true;
        if(password[i]>='A' && password[i]<='Z')
            capital=true;
        if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*')
            symbol=true;
        } 
        try
        {
           if(count<6 && digit==false && symbol==false && capital==false)
                throw 'c';
            else    
                cout<<"Valid Password";
        }
        catch(char c)
        {
            cout<<"Invalid password..."<<endl;
        }
    return 0;       
}
/*OUTPUT-
Enter password: 
esheta
Invalid password...

Enter password: 
Abc123%
Valid Password
*/