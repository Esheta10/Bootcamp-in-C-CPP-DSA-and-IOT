/*1. Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.*/
#include<iostream>
using namespace std;
template <class T,class F>
F addition(T x,F y)
{
    return(x+y);
}
int main()
{
    cout<<"Addition of multiple types of data using generic template"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"Addition of integer parameters: "<<addition<int,int>(10,10);
    //data is passed as integer
    cout<<"\nAddition of float parameters: "<<addition<float,float>(10.2,10.6);
    //data is passed as float
    cout<<"\nAddition of different parameters: "<<addition<int,float>(10,10.6);
    //generic template claims both the parameters to be of same data type.
    return 0;
}
/*output-
Addition of multiple types of data using generic template
---------------------------------------------------------
Addition of integer parameters: 20
Addition of float parameters: 20.8
Addition of different parameters: 20.6
*/

/*
template <class T>
T addition(T x,T y)
{
    return(x+y);
}
int main()
{
    cout<<"Addition of multiple types of data using generic template"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"Addition of integer parameters: "<<addition<int>(10,10);
    //data is passed as integer
    cout<<"\nAddition of float parameters: "<<addition<float>(10.2,10.6);
    //data is passed as float
    //generic template claims both the parameters to be of same data type.
    return 0;
}
Addition of multiple types of data using generic template
---------------------------------------------------------
Addition of integer parameters: 20
Addition of float parameters: 20.8
*/