/*4. Create Product class and convert Product type to Item type using casting operator
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
class Item
{
    private:
        int i;
    public:
        Item(){}
        Item(int c)
        {
           i=c;
        }
        void display()
        {
            cout<<"i = "<<i<<endl;
        }
        
};
class Product
{
    private:
        int x;
        int y;
    public:
        Product(){}
        void setData(int a,int b)
        {
            x=a;
            y=b;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        operator Item()
        {
            Item i(x+y);
            return i;

        }

};

int main()
{
    Item i1;
    Product p1;

    p1.setData(3,4);
    i1=p1;  //operator Item():ye item return karega but aisa tabhi ho sakta hai jab ye product class mein ho hence hum iss operator ko product class mein banayenge
    i1.display();
    return 0;
}
/*OUTPUT-
i = 7
*/