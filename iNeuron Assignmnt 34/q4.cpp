/*4. Write a program to copy the contents of one text file to another while changing the
case of every alphabet.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("c:/file/first.txt");
    ofstream fout;
    fout.open("c:/file/second.txt");
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>=97 && ch<=122)
        {
            ch=toupper(ch);
        }
        else if(ch>=65 && ch<=90)
        {
            ch=tolower(ch);
        }
        fout<<ch;
    }
    cout<<"Data has been copied"<<endl;
    fout.close();
    fin.close();
    return 0;
}
/*OUTPUT-
Data has been copied
*/