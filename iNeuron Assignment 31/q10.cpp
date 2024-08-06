/*10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.*/
#include<iostream>
#include<cstring>
using namespace std;

class Worker
{
    public:
        int code;
        char name[20];
        float salary;
    public:
        Worker()
        {

        }
        Worker(int c,char *n,float s)
        {
            code=c;
            strcpy(name,n);
            salary=s;
        }
        void putW()
        {
            cout<<"Code : "<<code<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
class Officer
{
    protected:
        float DA,HRA;
    public:
        Officer()
        {

        }
        Officer(float da,float hra)
        {
            DA=da;
            HRA=hra;
        }
        void putO()
        {
            cout<<"DA : "<<DA<<endl;
            cout<<"HRA: "<<HRA<<endl;
        }
};
class Manager:public Worker,public Officer
{
    private:
        float TA;
        float gsal;
    public:
        Manager()
        {
            
        }
        Manager(int c,char *n,float s,float da,float hra):Worker(c,n,s),Officer(da,hra)
        {

        }
        void putM()
        {
            putW();
            putO();
            TA=0.10*salary;
            cout<<"TA : "<<TA<<endl;
            gsal=TA+HRA+DA+salary;
            cout<<"Gross salary: "<<gsal<<endl;
        }
};
int main()
{
    Manager *m;
    int count,i;

    cout<<"Enter manager count: "<<endl;
    cin>>count;
    m = new Manager[count];

    for(i=0;i<count;i++)
    {
        cout<<"Enter worker information for : "<<i+1<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"Enter code: "<<endl;
        int c;
        cin>>c;
        cout<<"Enter name: "<<endl;
        char n[20];
        cin>>n;
        cout<<"Enter salary: "<<endl;
        float s;
        cin>>s;

        cout<<"Enter DA: "<<endl;
        float da;
        cin>>da;
        cout<<"Enter HRA: "<<endl;
        float hra;
        cin>>hra;
        m[i]=Manager(c,n,s,da,hra);
    }
    for(i=0;i<count;i++)
    {
        cout<<"-----------------------"<<endl;
        cout<<"Manager Information"<<endl;
        cout<<"-----------------------"<<endl;
        m[i].putM();
    }
    return 0;
}
/*OUTPUT-
Enter manager count: 
1
Enter worker information for : 1
------------------------------  
Enter code:
1001
Enter name: 
Surendra
Enter salary: 
50000
Enter DA: 
600
Enter HRA: 
700
-----------------------
Manager Information
-----------------------
Code : 1001
Name : Surendra
Salary: 50000
DA : 600
HRA: 700
TA : 5000
Gross salary: 56300
*/