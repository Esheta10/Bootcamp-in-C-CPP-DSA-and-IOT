/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{
    private:
        int c_no;
        char c_name[20];
        int units;
        double bill;
    public:
        void get()
        {
            cout<<"\nEnter customer details: \n";
            cout<<"\nEnter customer no. : ";
            cin>>c_no;
            cout<<"\nEnter customer name: ";
            cin>>c_name;
            cout<<"\nEnter the no. of units consumed: ";
            cin>>units;
        }
        void put()
        {
            cout<<"\nEntered details of customer are: \n";
            cout<<"\nCustomer no. : "<<c_no;
            cout<<"\nCustomer name : "<<c_name;
            cout<<"\nNo. of units consumed : "<<units;
            cout<<"\nCustomer bill : "<<bill;
        }
        void calc_bill()
        {
            if(units<=100)
                bill=units*1.20;
            else if(units<=200)
                bill=100*1.20+(units-100)*2;
            else
                bill=100*1.20+100*2+(units-200)*3;
        }
};
int main()
{
    Bill b1;
    b1.get();
    b1.calc_bill();
    b1.put();

    return 0;
}
/*OUTPUT-
Enter customer details: 

Enter customer no. : 1

Enter customer name: Esheta  

Enter the no. of units consumed: 245

Entered details of customer are:

Customer no. : 1
Customer name : Esheta
No. of units consumed : 245
Customer bill : 455
*/
