/*6. Write a C++ Program to find Sum of Array using function template.*/
#include<iostream>
using namespace std;

template<class T>
T sum(T a[],int length)
{
    T ret= 0;
    for(int i=0;i<length;i++)
    {
        ret=ret+a[i];
    }
    return ret;
}
int main()
{
    int int_data[5];
    float float_data[5];
    int i;
    cout<<"Input 5 integers: "<<endl;   //input 5 integers
    for(i=0;i<5;i++)
    {
        cin>>int_data[i];
    }
    cout<<"Sum of above is: "<<sum<int>(int_data,5)<<endl;

    cout<<"Input 5 floating point numbers: "<<endl; //input 5 floating point numbers
    for(i=0;i<5;i++)
    {
        cin>>float_data[i];
    }
    cout<<"Sum of above is: "<<sum<float>(float_data,5)<<endl;

    return 0;
}
/*OUTPUT-
Input 5 integers: 
1 2 3 4 5
Sum of above is: 15
Input 5 floating point numbers: 
1.2 3.4 5.6 7.8 9.0
Sum of above is: 27
*/

