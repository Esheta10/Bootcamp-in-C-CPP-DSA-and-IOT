//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char a[3][2][20]={  //[3]->no. of users,[2]->no.of details(username,password),[20]->max. size of each detail
        {"Esheta","123"},
        {"Prateek","456"},
        {"Deepak","789"}
    };
//char a[3][2][20] denotes a 3-dimensional character array.
    char username[20];
    char password[20];

    int choice;
    printf("Enter your choice:\n 1.Login\n 2.Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
                printf("Enter the username: ");
                scanf("%s",username);
                printf("Enter passsword: ");
                scanf("%s",password);
    
                for(i=0;i<3;i++)
                {
                    if(strcmp(username,a[i][0])==0 && strcmp(password,a[i][1])==0)
                            {
                                 printf("\nLogin successful! ");
                                 flag=1;
                                 break;
                            }
                }
                if(flag==0)
                        printf("Username or password did not match...");
            break;
        case 2: printf("Exiting....");
                break; 
    }          
    return 0;
}
/*OUTPUT-
 1.Login
Enter your choice:
 1.Login
 2.Exit
1
Enter the username: Esheta
Enter passsword: 123

Login successful!
 */
