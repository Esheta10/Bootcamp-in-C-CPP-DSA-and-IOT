/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class myString
{
    private:
        char str[200];
    public:
        void accept_string();
        void display_string();
        void operator!();
};
void myString::accept_string()
{
    cout<<"\nEnter the string: ";
    cin>>str;
}
void myString::display_string()
{
    cout<<str;
}
void myString::operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
        else if (str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    }
    cout<<"\nReverse case string is:\n";
}
int main()
{
    myString s1;
    s1.accept_string();
    cout<<"\nThe string is: ";
    s1.display_string();
    !s1;
    s1.display_string();

    return 0;
}
/*OUTPUT-
Enter the string: esheta

The string is: esheta
Reverse case string is:
ESHETA
*/