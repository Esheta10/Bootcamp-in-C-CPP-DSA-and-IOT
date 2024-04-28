//9. Write a function to reverse a string word wise. (For example if the given string is
//“Mysirg Education Services” then the resulting string should be “Services Education Mysirg”)
#include<stdio.h>
#include<string.h>
void swap(char a[],int i,int j);
int main()
{
    char a[]=" Mysirg Education Services ";
    int i=0,start=0,end=0,flag=0; //we are using start and end for each separate word susch as MySirg
    while(a[i] != '\0')
    {
        while(a[i] != ' ')
        {
            if(a[i] =='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        swap(a,start,end-1);// (end-1) since end is pointing at space and my last word has ended before space
        if(flag == 1)
            break;
        start=end++;//next new word will start after space(end) hence end++
        i++;//updation before starting of next new word such as "Education" after "MySirg"
    }
    swap(a,0,i-1); //reversing of entire array
    printf("%s",a);
    return 0;
}
void swap(char a[],int i,int j)
{
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        i++;
        j--;
    }
}
/*OUTPUT-
Services Education Mysirg
*/