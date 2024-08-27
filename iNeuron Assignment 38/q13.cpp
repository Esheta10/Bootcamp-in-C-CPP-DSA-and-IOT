/*13. Push characters in a list and print them separated by space in C++ STL*/
#include<iostream>
#include<list>
using namespace std;

int main()
{
    //list of character elements
    list<char> clist;

    for(char i='A';i<='Z';i++)
    {
        clist.push_back(i);
    }
    //printing all elements
    cout<<"list clist elements: "<<endl;
    for(char x:clist)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
/*OUTPUT-
list clist elements: 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
*/