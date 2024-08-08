/*10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.*/
#include<bits/stdc++.h>
using namespace std;

class Player
{
    int player_no,no_of_matches;
    char player_name[100];
    int *goals;
    public:
        Player()
        {
            int i;
            cout<<"Enter player no. ";
            cin>>player_no;
            cout<<"Enter player name: ";
            cin>>player_name;
            cout<<"Enter the no. of matches played: ";
            cin>>no_of_matches;
            goals = new int[no_of_matches];
            for(int i=0;i<no_of_matches;i++)
            {
                cout<<"Enter no. of goals in "<<i+1<<" match: ";
                cin>>goals[i];
            }
        }
        void display()
        {   
            cout<<"----------------------"<<endl;
            cout<<"Player no.: "<<player_no<<endl;
            cout<<"Player Name: "<<player_name<<endl;
            cout<<"No. of matches played: "<<no_of_matches<<endl;
            for(int i=0;i<no_of_matches;i++)
            {
                cout<<"Match: "<<i+1<<" Goals: "<<goals[i]<<endl;
            }
        }
};
int main()
{
    Player p;
    p.display();

    return 0;
}
/*OUTPUT-
Enter player no. 1
Enter player name: Prateek
Enter the no. of matches played: 4
Enter no. of goals in 1 match: 3
Enter no. of goals in 2 match: 4
Enter no. of goals in 3 match: 2
Enter no. of goals in 4 match: 6
----------------------
Player no.: 1
Player Name: Prateek
No. of matches played: 4
Match: 1 Goals: 3
Match: 2 Goals: 4
Match: 3 Goals: 2
Match: 4 Goals: 6
*/