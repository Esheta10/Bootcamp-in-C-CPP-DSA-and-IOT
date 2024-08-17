/*2. Write a C++ program to read a text file and count the number of characters in it.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("C:/file/read.txt");
    fout<<"My name is Esheta";
    fout.close();

    ifstream fin;
    fin.open("C:/file/read.txt");
    fin.seekg(0,ios_base::beg);
    int c=0,sp=0;
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);//we use "get" to read character by character
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
            c++;
        else
        {
            if(ch == ' ')
                sp++;
        }
    }
    cout<<"No. of characters in a file = "<<c<<endl;
    cout<<"No. of spaces between words in a file = "<<sp;
    fin.close();

    return 0;
}
/*OUTPUT-
No. of characters in a file = 15
No. of spaces between words in a file = 3
*/
