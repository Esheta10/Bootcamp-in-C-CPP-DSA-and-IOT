/*3. Write a C++ program to open an output file 'a.txt' and append data to it.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("c:/file/a.txt");
    fout.open("c:/file/a.txt",ios::app);
    if(fin.is_open())
    {
        fout<<"Writing to a file opened from program\n"<<endl;
    }
    cout<<"Data has been appended to the file";
    fin.close();
    fout.close();

    return 0;
}
/*OUTPUT-
Data has been appended to the file
*/