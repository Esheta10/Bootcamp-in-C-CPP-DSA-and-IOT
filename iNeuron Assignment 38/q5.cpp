/*5. Input and add elements to a list C++ STL*/
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string>lstr;
    list<string>::iterator it;

    string str;

    while(true)
    {
        cout<<"Enter string: (\"EXIT\" to quit): ";
        getline(cin,str);
        if(str=="EXIT")
            break;
        lstr.push_back(str);
    }
    cout<<"\nList elements are: "<<endl;
    for(it=lstr.begin();it!=lstr.end();it++)
    {
        cout<<*it<<" ";
    }

    list<int> l2;
    int x;
    cout<<"\nEnter numbers: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        l2.push_back(x);
    }
    int sum=0;
    for(auto i:l2)
    {
        sum = sum + i;
    }
    cout<<"\nSum is: "<<sum<<endl;

    return 0;
}
/*OUTPUT-
Enter string: ("EXIT" to quit): Esheta Jaiswal
Enter string: ("EXIT" to quit): EXIT

List elements are: 
Esheta Jaiswal     
Enter numbers:     
1 2 3 4 5

Sum is: 15
*/