/*5. Write a C++ program to merge the two files.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin1,fin2;
    ofstream fout;
    string ch,file_name1,file_name2,merge;

    cout<<"Enter the name of 1st file with extension .txt-";
    getline(cin,file_name1);
    cout<<"Enter the name of 2nd file with extension .txt-";
    getline(cin,file_name2);
    cout<<"Enter the name of merged file: ";
    getline(cin,merge);

    fin1.open(file_name1);
    fin2.open(file_name2);
    if(!fin1 || !fin2)
    {
        cout<<"Invalid filename...there is no such file";
        exit(EXIT_FAILURE);
    }
    fout.open(merge);
    if(!fout)
    {
        cout<<"Invalid filename...there is no such file";
        exit(EXIT_FAILURE);
    }

    while(!fin1.eof())
    {
        getline(fin1,ch);
        fout<<ch;
    }
    while(!fin2.eof())
    {
        getline(fin2,ch);
        fout<<ch;
    }
    cout<<"File has been successfully merged!!!"<<endl;
    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
/*OUTPUT-
Enter the name of 1st file with extension .txt-C:/file/first.txt
Enter the name of 2nd file with extension .txt-C:/file/second.txt
Enter the name of merged file: C:/file/merge.txt
File has been successfully merged!!!
*/