/*5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/
#include<iostream>
using namespace std;
int CheckMobile(int num)
{
    int count=0;
    while(num)
    {
        num=num/10;// by dividing each time by 10,we are removing the last digit and incrementing length value
        count++;
    }
    return count;
}
int main()
{
    int mobile;
    cout<<"Enter your mobile number: ";
    cin>>mobile;

    try
    {
        if(CheckMobile(mobile)!=10)
            throw mobile;
        else
            cout<<"Valid mobile number";
    }
    catch(int e)
    {
        cout<<"Invalid mobile number!!!!...........It should have 10 digits"<<endl;
    }
    return 0;
}
/*OUTPUT-
Enter your mobile number: 123456789
Invalid mobile number!!!!...........It should have 10 digits

Enter your mobile number: 9876543210
Valid mobile number
*/
