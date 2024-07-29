/*Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.*/
#include<iostream>
using namespace std;
int validPincode(int pin)
{
    int count=0;
    int temp=pin;
    while(temp)
    {
        temp=temp/10;
        count++;
    }
    return count;
}
int main()
{
    int pin;
    cout<<"Enter your area pincode: ";
    cin>>pin;
    try
    {
        if(validPincode(pin)!=6)
            throw pin;
        else
            cout<<"Your pincode is valid";
    }
    catch(int e)
    {
        cout<<"Invalid pincode"<<endl;
    }
    return 0;
}
/*OUTPUT-
Enter your area pincode: 123456
Your pincode is valid

Enter your area pincode: 65
Invalid pincode
*/