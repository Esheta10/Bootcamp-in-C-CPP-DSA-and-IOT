/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include<iostream>
#include<cstring>
using namespace std;
class CString
{
    private:
        char str[20];
    public:
        void getString()
        {
            cout<<"Enter string: "<<endl;
            cin>>str;
        }
        void display()
        {
            cout<<str<<endl;
        }
        CString operator+(CString x)//concatenating string
        {
            CString s;
            strcpy(s.str,str);
            strcat(s.str,x.str);
            return s;
        }
        int operator==(CString &t);//comparing string
};
int CString::operator==(CString &t)
{
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;t.str[j]!='\0';j++)
        {
            if(str[i] == t.str[j])
            {
                return 0;
            }
            else
                return 1;
        }
    }
}
int main()
{
    CString str1,str2,str3;
    int result=0;

    str1.getString();
    cout<<"First String: ";
    str1.display();             //displaying first string
    cout<<endl;

    str2.getString();
    cout<<"Second string: ";
    str2.display();             //displaying second string
    cout<<endl;

    str3=str1+str2;                 //concatenated string, overloading + operator
    cout<<"Concatenated string is:";        
    str3.display();
    cout<<endl;

    result=str1==str2;  //comparing two strings, overloading == operator

    if(result==0)
        cout<<"Two strings are same";
    else
        cout<<"Two strings are not same";

        return 0;
}
/*OUTPUT-
Enter string: 
Esheta
First String: Esheta

Enter string:
Esheta
Second string: Esheta

Concatenated string is:EshetaEsheta

Two strings are same
*/