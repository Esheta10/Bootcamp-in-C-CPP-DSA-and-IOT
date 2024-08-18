/*3. Write a function to print the element of a vector and take input from the user.*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    cout<<"Enter 0 to stop appending element"<<endl;
    cout<<"Append any other element "<<endl;
    int a;
    cin>>a;

    while(a)
    {
        arr.push_back(a);
        cout<<"Enter 0 to stop appending"<<endl;
        cout<<"Append any other element "<<endl;
        cin>>a;
    }
    cout<<"Printing the vector.........."<<endl;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
/*OUTPUT-
Enter 0 to stop appending element
Append any other element         
1
Enter 0 to stop appending
Append any other element 
2
Enter 0 to stop appending
Append any other element 
3
Enter 0 to stop appending
Append any other element 
4
Enter 0 to stop appending
Append any other element 
5
Enter 0 to stop appending
Append any other element 
0
Printing the vector..........
1 2 3 4 5
*/