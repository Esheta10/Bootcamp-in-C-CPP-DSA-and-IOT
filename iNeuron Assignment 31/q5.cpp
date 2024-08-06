/*5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases'n' items.
Display the item-wise bill and total amount using appropriate format.*/
#include<iostream>
using namespace std;
class Item
{
    public:
        int item_no;
        char name[50];
        double item_price;
};
class Discounted_Item:public Item
{
    public:
        int discount_percent;
        int discount_price;
    public:
        void accept_details()
        {
            cout<<"Enter Item Name: "<<endl;
            cin>>name;
            cout<<"Enter Item No. "<<endl;
            cin>>item_no;
            cout<<"Enter Item price: "<<endl;
            cin>>item_price;
            cout<<"Enter discount percent: "<<endl;
            cin>>discount_percent;
            discount_price=item_price - item_price*discount_percent/100;
        }
        void display()
        {
            cout<<"Item Name: "<<name<<endl;
            cout<<"Item No.:"<<item_no<<endl;
            cout<<"Item Price:"<<item_price<<endl;
            cout<<"Discount Percent:"<<discount_percent<<endl;
            cout<<"Discounted Price:"<<discount_price<<endl;
            cout<<"---------------------------------------"<<endl;
        }
};
int main()
{
    int i,count;
    int total_price=0,total_discount=0;
    Discounted_Item item[100];
    cout<<"How many items you want to enter ?"<<endl;
    cin>>count;
    for(int i=1;i<=count;i++)
    {
        item[i].accept_details();
    }
    for(int i=1;i<=count;i++)
    {
        item[i].display();
    }
    for(int i=1;i<=count;i++)
    {
        total_price=total_price + item[i].item_price;
    }
    for(int i=1;i<=count;i++)
    {
        total_discount=total_discount + item[i].item_price-item[i].discount_price;
    }
    cout<<"Total price: "<<total_price<<endl;
    cout<<"Total discount: "<<total_discount<<endl;
    cout<<"Total Payable Amount: "<<total_price-total_discount<<endl; 
    return 0;
}
/*OUTPUT-
How many items you want to enter ?
2
Enter Item Name: 
Shirt
Enter Item No. 
1002
Enter Item price: 
500
Enter discount percent: 
20
Enter Item Name: 
Jeans
Enter Item No. 
2002
Enter Item price: 
700
Enter discount percent: 
20
Item Name: Shirt
Item No.:1002
Item Price:500
Discount Percent:20
Discounted Price:400
---------------------------------------
Item Name: Jeans
Item No.:2002
Item Price:700
Discount Percent:20
Discounted Price:560
---------------------------------------
Total price: 1200
Total discount: 240
Total Payable Amount: 960
*/
