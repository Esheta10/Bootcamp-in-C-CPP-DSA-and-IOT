//8. Given a list of words followed by two words, the task is to find the minimum distance
//between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//word1 = “the”, word2 = “fox”, OUTPUT : 2 )
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[5][20]={"the","quick","brown","fox","quick"};
    char word1[]="the";
    char word2[]="fox";

    int i,w1=-1,w2=-1,min=10000,temp;

    for(i=0;i<5;i++)
    {
        if(strcmp(a[i],word1)==0)//This compares the string a[i] (the current word in the array) with the string word1. 
        //If the strings are equal, strcmp returns 0.
            w1=i;
        if(strcmp(a[i],word2)==0)
            w2=i;
        if(w1 != -1 && w2 != -1)
            {
                temp=abs(w2-w1);//abs=mod(returns +ve value) //temp=abs(3-0)=3
                if(temp<min)//3<10000
                    min=temp;//min=3
            }
    }
    printf("%d",min-1);// Subtracting 1 from min to get the distance between words, not the number of words between them //min-1 = 3-1 =2
    return 0;
}
/*OUTPUT-
2
*/