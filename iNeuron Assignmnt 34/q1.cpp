/*1. Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("C:/file/xyz.txt");
    if(fout)
    {
        cout<<"File created successfully";
        fout<<"My name is Esheta Jaiswal";
    }
    else
    {
         cout<<"File not created successfully";  
    }
    fout.close();
    return 0;
}
/*OUTPUT-
File created successfully
*/