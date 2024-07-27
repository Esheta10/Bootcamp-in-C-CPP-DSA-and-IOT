/*3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}*/
#include<iostream>
using namespace std;
class Product
{
    private:
        int c;
        int d;
    public:
        Product(){}
        void setData(int p,int q)
        {
            c=p;
            d=q;
        }
        int getC()
        {
            return c;
        }
        int getD()
        {
            return d;
        }
};
class Item
{
    private:
        int x;
        int y;
    public:
        Item(){}
        Item(int a,int b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<"x = "<<x<<" y = "<<y<<endl;
        }
        Item(Product p)
        {
            x=p.getC();
            y=p.getD();
        }
    
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1; //Item(Product)
    i1.display();
    return 0;
}
/*OUTPUT-
x = 3 y = 4
*/