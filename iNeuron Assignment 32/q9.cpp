/*9. Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.*/
#include<bits/stdc++.h>
using namespace std;
class Area
{
    private:
        float areaOfTriangle=0,areaOfRectangle=0,areaOfCircle=0;
    public:
        Area()
        {

        }
        Area(int length,int breadth)
        {
            areaOfRectangle=length*breadth;
        }
        Area(int radius)
        {
            areaOfCircle=3.14*radius*radius;
        }
        Area(int a,int b,int c)
        {
            float s=(a+b+c)/2.0;
            areaOfTriangle=sqrt(s*(s-a)*(s-b)*(s-c));
        }
        void displayTri()
        {
            if(areaOfTriangle==0)
                cout<<"This is not a valid triangle...."<<endl;
            else
                cout<<"Area of triangle: "<<areaOfTriangle<<endl;
        }
        void displayCir()
        {
            cout<<"Area of circle: "<<areaOfCircle<<endl;
        }
        void displayRect()
        {
            cout<<"Area of Rectangle: "<<areaOfRectangle<<endl;
        }
};
int main()
{
    int choice;
    while(true)
    {
        cout<<"1.Calculate the area of triangle "<<endl;
        cout<<"2.Calculate the area of rectangle "<<endl;
        cout<<"3.Calculate the area of circle "<<endl;
        cout<<"4.Exit "<<endl;
        cout<<"Enter your choice: ";
        cin>>choice; 

        if(choice == 1)
            {
                cout<<"Enter the value of edges: ";
                int a,b,c;
                cin>>a>>b>>c;
                Area a1(a,b,c);
                a1.displayTri();
            }
        else if(choice == 2)
        {
            cout<<"Enter the values of length and breadth: "<<endl;
            int l,b;
            cin>>l>>b;
            Area a2(l,b);
            a2.displayRect();
        }
        else if(choice == 3)
        {
            cout<<"Enter the value of radius: ";
            int r;
            cin>>r;
            Area a3(r);
            a3.displayCir();
        }
        else if(choice == 4)
        {
            exit(0);
        }
        else 
        {
             cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
/*OUTPUT-
1.Calculate the area of triangle  
2.Calculate the area of rectangle 
3.Calculate the area of circle    
4.Exit 
Enter your choice: 1
Enter the value of edges: 3 4 5
Area of triangle: 6
1.Calculate the area of triangle  
2.Calculate the area of rectangle 
3.Calculate the area of circle    
4.Exit 
Enter your choice: 2
Enter the values of length and breadth: 
5 6
Area of Rectangle: 30
1.Calculate the area of triangle  
2.Calculate the area of rectangle 
3.Calculate the area of circle    
4.Exit 
Enter your choice: 3
Enter the value of radius: 2
Area of circle: 12.56
1.Calculate the area of triangle
2.Calculate the area of rectangle
3.Calculate the area of circle
4.Exit
Enter your choice: 4
*/