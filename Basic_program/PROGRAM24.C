//Write a Program to convert Fahrenheit to Celsius C = ((F-32)*5)/9.

#include<stdio.h>
#include<conio.h>

void main()
{
	float f,c;
	clrscr();
	printf("Enter the value of fahrenheit:-");
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("After converting Fahrenheit to Celsius value=%.2f",c);
	getch();
}