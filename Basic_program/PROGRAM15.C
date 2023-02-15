//Write a Program to take ASCII value from user and print it’s Alphabet.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter ASCII value:-");
	scanf("%d",&num);
	printf("The character value of given ASCII value = %c",char(num));
	getch();
}