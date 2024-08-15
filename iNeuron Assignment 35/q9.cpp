/*9. Write a C++ Program to Perform Simple Addition Function Using Templates.*/
#include<iostream>
using namespace std;
template<class T>
T add(T x,T y)
{   
    return (x+y);
};
int main()
{
    cout<<"\nAddition of integer parameters: "<<add<int>(10,10);
    cout<<"\nAddition of float parameters: "<<add<float>(2.8,7.6); 

    return 0;
}
/*OUTPUT-
Addition of integer parameters: 20
Addition of float parameters: 10.4
*/