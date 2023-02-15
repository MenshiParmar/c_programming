//Write a Program to Swap four Numbers With using Other variables.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1=12, num2=45, num3=56, num4=67,temp;
	clrscr();
	printf("Before swapping num1=%d, num2=%d, num3=%d and num4=%d\n\n",num1,num2,num3,num4);
	temp=num1;
	num1=num2;
	num2=num3;
	num3=num4;
	num4=temp;
	printf("After swapping num1=%d, num2=%d, num3=%d and num4=%d",num1,num2,num3,num4);
	getch();
}