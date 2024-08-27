/*14.Access elements of a characters list using const_iterator in C++ STL*/
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<char> clist;

    for(char i='A';i<='Z';i++)
    {
        clist.push_back(i);
    }

    //declaring a const iterator
    list<char>::const_iterator it;  // read-only location,we cannot change the value of content
    
    //printing all elements
    for(it=clist.begin();it!=clist.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
/*OUTPUT-
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/