/*5. Find largest and smallest elements in a vector.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(250);
    myVector.push_back(98);
    myVector.push_back(4);
    myVector.push_back(345);

    cout<<"Largest element in given vector is: ";
    cout<<*max_element(myVector.begin(),myVector.end());
    cout<<"\nSmallest element in given vector is: ";
    cout<<*min_element(myVector.begin(),myVector.end());

    return 0;
}
/*OUTPUT-
Largest element in given vector is: 345
Smallest element in given vector is: 1*/
