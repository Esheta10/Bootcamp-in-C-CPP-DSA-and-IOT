//7. Define a class Box and write a program to enter length, breadth and height and
//initialise objects using constructor also define member functions to calculate volume
//of the box.
#include<iostream>
using namespace std;
class Box
{
    private:
        int length;
        int breadth;
        int height;
        int volume;
    public:
        Box(int x,int y,int z)
        {
            length=x;
            breadth=y;
            height=z;
        }
        void calculate_volume()
        {
            volume=length*breadth*height;
        }
        int get_volume()
        {
            return volume;
        }
};
int main()
{
    int length,breadth,height;
    cout<<"Enter length of the box: "<<endl;
    cin>>length;
    cout<<"Enter breadth of the box: "<<endl;
    cin>>breadth;
    cout<<"Enter height of the box: "<<endl;
    cin>>height;

    Box b1(length,breadth,height);
    b1.calculate_volume();

    cout<<"Volume of the box is: "<<b1.get_volume();
    
    return 0;
}
/*OUTPUT-
Enter length of the box: 
25
Enter breadth of the box: 
10
Enter height of the box: 
50
Volume of the box is: 12500
*/