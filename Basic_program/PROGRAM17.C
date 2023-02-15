//Write a Program to assign a value of 100.25 to a float type variable and convert it into Integer type.

#include<stdio.h>
#include<conio.h>

void main()
{
	float num = 100.25;
	clrscr();
	printf("The value of num = %.2f\n",num);
	printf("The value after converting into integer = %d",int(num));
	getch();
}