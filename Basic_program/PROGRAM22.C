//Write a Program to Swap Two Number without using Third variable.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1=23, num2=45;
	clrscr();
	printf("Before swapping num1=%d and num2=%d\n",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nAfter swapping num1=%d and num2=%d",num1,num2);
	getch();
}