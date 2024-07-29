/*4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.*/
#include<iostream>
using namespace std;
bool isValidEmailID(char*);
int main()
{
    char email[100];
    cout<<"Enter an email-Id: ";
    gets(email);
    try
    {
        if(isValidEmailID(email))// if true
        {
            cout<<"Valid email-Id";
        }
        else    
            throw 'c';
    }
    catch(const char c)
    {
       cout<<"Invalid email-id";
    } 
}
bool isValidEmailID(char *email)
{
    int AtOffset=-1;
    int DotOffset=-1;
    int length=0;

    for(int i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
            AtOffset=i;
        else if(email[i]=='.')
            DotOffset=i;
        
        length++;
    }
    if(AtOffset==-1 || DotOffset==-1)//if both @ and . are not present in e-mail-->invalid
        return 0;
    if(AtOffset>DotOffset)//if @ comes after . ,it is invalid
        return 0 ;
    return (DotOffset < (length-1));//to check that . doesn't come at the end of email
}
/*OUTPUT-
Enter an email-Id: abc@gmail.com
Valid email-Id
*/