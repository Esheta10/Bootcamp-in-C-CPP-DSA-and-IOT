/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.                                         
For the first 50 units Rs. 0.50/unit------>case 1:(unit<=50)   |
For the next 100 units Rs. 0.75/unit------>case 2:(unit<=150)  |-->+20%
For the next 100 units Rs. 1.20/unit------>case 3:(unit<=250)  |
For units above 250 Rs. 1.50/unit--------->case 4:(unit>250)   |
An additional surcharge of 20% is added to the bill.          
*/
/* Say, total 260 units is consumed then,
    260
    -50       0.50*50+0.75*100+1.20*100+10*1.50=235/-
    210       235+20%235=235+47=282/-(total amount to be paid)
   -100
    110
   -100
     10
*/
#include<stdio.h>
int main()
{
    float x,amount=0,total=0;
    printf("Enter the units consumed- ");
    scanf("%f",&x);
    switch(x<=50)//either true(1) or false(0) will be the result hence written like this.
    {
        case 1: amount=x*0.5; break;
        case 0: switch(x<=150)//50 se toh zyada hi hai
          {
            case 1: amount= 25+(x-50)*0.75; break;// pehle 50 units ka amount=0.5*50=25/-is always fixed
            //also subtract the initial 50 units from total since its amount is already calculated.
            case 0: switch(x<=250)//150 se toh zyada hi hai
                {
                    case 1:amount=25+75+(x-150)*1.20; break;// pehle 50 units ka 25/-and next 100 units ka 75/-
                    //subtract the total of 150 units from the amount since they have already been evaluated.
                    case 0:amount=25+75+120+(x-250)*1.50; break;//pehle 50 units ka 25/-,next 100 units ka 75/-,next 100 units ka 120/-
                    //subtract the total of 250 units from amount since its calculation is already done.   
                }
          }
    }
    total=amount+amount*0.20;
    printf("Total amount= %.2f",total);
    return 0;
}
