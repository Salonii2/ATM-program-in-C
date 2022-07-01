#include<stdio.h>
int main()
{
float x,y;
char ch;
printf("Enter Initial Amount\n");
scanf("%f",&x);
printf("Enter\nc for Credit\nd for Debit\nb for Balance\n");
scanf("\n%c",&ch);
switch(ch)
{
case 'c':
printf("Enter Credit Amount\n");
scanf("%f",&y);
x=x+y;
printf("New Amount=%f",x);
break;
case 'd':
printf("Enter Debit Amount\n");
scanf("%f",&y);
if(x>=y)
{
x=x-y;
printf("New Amount=%f",x);
}
else
{
printf("Insuffcient Amount in your Account");
}
break;
case 'b':
printf("Amount in your Account=%f",x);
break;
default:
printf("Choose Correct Option for Operation");

}

}
