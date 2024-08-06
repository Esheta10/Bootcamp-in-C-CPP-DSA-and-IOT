/*8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.*/
#include<iostream>
using namespace std;
class Customer
{
    public:
        char name[20];
        long long phone_no;
    public:
        void get()
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"Enter customer name: "<<endl;
            cin>>name;
            cout<<"Enter customer phone_no: "<<endl;
            cin>>phone_no; 
            cout<<"-----------------------------------"<<endl;
        }
        void display()
        {
            cout<<"Customer Details:"<<endl;
            cout<<"-----------------------------------"<<endl;
            cout<<"Customer Name:           "<<name<<endl;
            cout<<"Customer Phone No.:      "<<phone_no<<endl;
            cout<<"-----------------------------------"<<endl;
        }
};
class Depositor: public Customer
{
    public:
        int acc_no;
        float balance;
    public:
        void getData()
        {
            cout<<"Enter customer A/C No: "<<endl;
            cin>>acc_no;
            cout<<"Enter balance: "<<endl;
            cin>>balance;
        }
        void show()
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"Customer A/C No:         "<<acc_no<<endl;
            cout<<"Balance:                 "<<balance<<endl; 
            cout<<"-----------------------------------"<<endl;
        }
};
class Borrower:public Depositor
{
    public:
        int loan_no;
        float loan_amt;
    public:
        void getData2()
        {
            cout<<"Enter loan no.: "<<endl;
            cin>>loan_no;
            cout<<"Enter loan amount: "<<endl;
            cin>>loan_amt;
        }
        void show2()
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"Customer Loan No:         "<<loan_no<<endl;
            cout<<"Customer loan amount:     "<<loan_amt<<endl; 
            cout<<"-----------------------------------"<<endl;

        }
};
int main()
{
    Borrower *b1;
    int n,i;
    cout<<"Enter the number of customer details,you want: "<<endl;
    cin>>n;
    b1 = new Borrower[n];
    for(i=0;i<n;i++)
    {
        b1[i].get();
        b1[i].getData();
        b1[i].getData2();
    }
    for(i=0;i<n;i++)
    {
        b1[i].display();
        b1[i].show();
        b1[i].show2();
    }
    return 0;
}
/*OUTPUT-
Enter the number of customer details,you want: 
2 
-----------------------------------
Enter customer name: 
Prajakta
Enter customer phone_no: 
35146
-----------------------------------
Enter customer A/C No: 
123
Enter balance: 
50000
Enter loan no.: 
321
Enter loan amount: 
10000
-----------------------------------
Enter customer name: 
Sapna
Enter customer phone_no: 
26479
-----------------------------------
Enter customer A/C No: 
456
Enter balance: 
60000
Enter loan no.: 
654
Enter loan amount: 
12000
Customer Details:
-----------------------------------
Customer Name:           Prajakta  
Customer Phone No.:      35146     
-----------------------------------
-----------------------------------
Customer A/C No:         123
Balance:                 50000
-----------------------------------
-----------------------------------
Customer Loan No:         321
Customer loan amount:     10000
-----------------------------------
Customer Details:
-----------------------------------
Customer Name:           Sapna
Customer Phone No.:      26479
-----------------------------------
-----------------------------------
Customer A/C No:         456
Balance:                 60000
-----------------------------------
-----------------------------------
Customer Loan No:         654
Customer loan amount:     12000*/
