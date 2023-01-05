#include<stdio.h>
#include<conio.h>

void main()
{
	//Increment-decrement operator
	//increment by one and decrement by one
	int num1=10,num2=15;
	clrscr();
	printf("The value of num1:-%d\n",num1);
	num1++;//postfix
	printf("The postfix incremented value of num1:-%d\n",num1);
	++num1;//prefix
	printf("The prefix incremented value of num1:-%d\n",num1);
	num2--;//postfix
	printf("The postfix decremented value of num2:-%d\n",num2);
	--num2;//prefix
	printf("The prefix decremented value of num2:-%d",num2);
	getch();
}