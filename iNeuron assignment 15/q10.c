//10. Write a function in C to count the frequency of each element of an array.
//using hashmap technique
#include<stdio.h>
int main()
{
    int a[10]={1,2,2,3,3,4,5,6,7,7};
    int freq[100]={0},i;

    for(i=0;i<10;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(freq[i]!=0)
            printf("%d --> %d\n",i,freq[i]);
    }
    return 0;
}
/*OUTPUT-
1 --> 1
2 --> 2
3 --> 2
4 --> 1
5 --> 1
6 --> 1
7 --> 2
*/