/*7. Write a program to find sum of vector elements*/
#include<iostream>
#include<numeric>   //stores accumulate function
#include<vector>
using namespace std;

int main()
{
    vector<int> v1{10,20,30,40,50};

    int sum=accumulate(v1.begin(),v1.end(),0);
    cout<<"Sum is: "<<sum;

    return 0;
}
/*OUTPUT-
Sum is: 150
*/