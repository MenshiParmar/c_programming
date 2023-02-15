//Write a Program to Swap Two Number with using Third variable.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1=12, num2=34, temp;
	clrscr();
	printf("Before swapping value of num1=%d and num2=%d\n\n",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping value of num1=%d and num2=%d",num1,num2);
	getch();
}