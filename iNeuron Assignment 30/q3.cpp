/*3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.*/
#include<iostream>
using namespace std;
int main()
{
    float num1,num2,ans;
    char Operator;

    cout<<"Performing arithmetic operations on two numbers:"<<endl;
    cout<<"-------------------------------------------"<<endl;

    try
    {
        cout<<"Enter 1st number: ";
        cin>>num1;
        if(num1==0)
            throw 0;
        cout<<"Enter a character: ";
        cin>>Operator;
        if(Operator != '+' && Operator != '-' && Operator != '*' && Operator !='/')
            throw Operator;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"--------------------------------------"<<endl;
        switch(Operator)
        {
            case '+': ans=num1 + num2;
                      break;
            case '-': ans=num1-num2;
                      break;
            case '*': ans=num1*num2;
                      break;
            case '/': 
                    if(num2==0) //finding if denominator is zero
                        throw 0;
                    ans=num1/num2;
            
                      break;
        }
        cout<<num1<<Operator<<num2<<"="<<ans;

    }   
    catch(const char c)
    {
        cout<<"Exception caught.......\nBad Operator"<<c<<"is not a valid operator";
    }
    catch(const int n)
    {
        cout<<"Error: Bad operation!!!";
    }
    return 0;
}
/*OUTPUT-
Performing arithmetic operations on two numbers:
-------------------------------------------
Enter 1st number: 56
Enter a character: *
Enter second number: 56
--------------------------------------
56*56=3136

Enter 1st number: 2
Enter a character: %
Exception caught.......
Bad Operator%is not a valid operator
*/