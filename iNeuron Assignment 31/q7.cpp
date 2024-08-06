/*7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.*/
#include<iostream>
using namespace std;

class Employee
{
    public:
        int emp_no;
        char name[20];
    void get()
    {
        cout<<"Enter employee no: "<<endl;
        cin>>emp_no;
        cout<<"Enter employee name: "<<endl;
        cin>>name;
    }
};
class Fulltime : public Employee
{
    public:
        int daily_rate;
        int no_of_days;
        int salary;
    public:
        void getData()
        {
            cout<<"Enter daily rate: "<<endl;
            cin>>daily_rate;
            cout<<"Enter number of days: "<<endl;
            cin>>no_of_days;
        }
        void cal()
        {
            salary=daily_rate*no_of_days;
            cout<<"Salary: "<<salary<<endl;
        }
        void show()
        {
            cout<<"----------------------------"<<endl;
            cout<<"Employee Number:    "<<emp_no<<endl;
            cout<<"Employee Name:      "<<name<<endl;
            cout<<"Salary:             "<<salary<<endl;
            cout<<"Status:             FullTime"<<endl;
            cout<<"-----------------------------"<<endl;
        }
};
class Parttime : public Employee
{
    public:
        int no_of_hours;
        int hourly_rate;
        int salary2;
    public:
        void getData2()
        {
            cout<<"Enter number of hours: "<<endl;
            cin>>no_of_hours;
            cout<<"Enter hourly rate: "<<endl;
            cin>>hourly_rate;
        }
        void cal2()
        {
            salary2=no_of_hours*hourly_rate;
            cout<<"Salary :"<<salary2<<endl;
        }
        void show2()
        {
            cout<<"-----------------------------"<<endl;
            cout<<"Employee Number:   "<<emp_no<<endl;
            cout<<"Employee Name:     "<<name<<endl;
            cout<<"Salary:            "<<salary2<<endl;
            cout<<"Status:            Parttime"<<endl;
            cout<<"-----------------------------"<<endl;
        }
};
int main()
{
    int var=0;
    int var1=0;
    Fulltime f1[5];
    Parttime p1[5];

    int x,i;
    do
    {
       cout<<endl;
       cout<<"1.Enter record: "<<endl;
       cout<<"2.Display record:"<<endl;
       cout<<"3.Search record: "<<endl;
       cout<<"4.Quit"<<endl;
       cout<<"Enter your choice: "<<endl;
       cin>>x;

       switch(x)
       {
            case 1:
                    int y;
                    cout<<"\n1.Fulltime employee"<<endl;
                    cout<<"2.Parttime employee"<<endl;
                    cout<<"Enter: ";
                    cin>>y;
                        switch(y)
                        {
                            case 1:
                                    f1[var].get();
                                    f1[var].getData();
                                    f1[var].cal();
                                    var++;
                                    break;
                            case 2:
                                    p1[var1].get();
                                    p1[var1].getData2();
                                    p1[var1].cal2();
                                    var1++;
                                    break;
                        }break;
            case 2:
                    for(int i=0;i<var;i++)
                    {
                        f1[i].show();
                    }
                    for(int i=0;i<var1;i++)
                    {
                        p1[i].show2();
                    }
                    break;
            case 3:
                    int a;
                    cout<<"Enter employee no.:"<<endl;
                    cin>>a;
                    for(int i=0;i<var;i++)
                    {
                        if(f1[i].emp_no==a)
                                f1[i].show();
                        if(p1[i].emp_no==a)
                                p1[i].show2();
                    }
       }
   }while(x!=4);
return 0;
}
/*OUTPUT-
1.Enter record:    
2.Display record:  
3.Search record:   
4.Quit
Enter your choice: 
1

1.Fulltime employee
2.Parttime employee
Enter: 1
Enter employee no: 
101
Enter employee name: 
Prateek
Enter daily rate: 
1000
Enter number of days: 
100 
Salary: 100000     

1.Enter record:    
2.Display record:  
3.Search record:   
4.Quit
Enter your choice: 
1

1.Fulltime employee
2.Parttime employee
Enter: 2
Enter employee no: 
201
Enter employee name: 
Esheta
Enter number of hours: 
1000
Enter hourly rate: 
20
Salary :20000

1.Enter record:
2.Display record:
3.Search record:
4.Quit
Enter your choice:
2
----------------------------
Employee Number:    101
Employee Name:      Prateek
Salary:             100000
Status:             FullTime
-----------------------------
-----------------------------
Employee Number:   201
Employee Name:     Esheta
Salary:            20000
Status:            Parttime
-----------------------------

1.Enter record:
2.Display record:
3.Search record:
4.Quit
Enter your choice:
3
Enter employee no.:
201
-----------------------------
Employee Number:   201
Employee Name:     Esheta
Salary:            20000
Status:            Parttime
-----------------------------

1.Enter record:
2.Display record:
3.Search record:
4.Quit
Enter your choice:
4
*/