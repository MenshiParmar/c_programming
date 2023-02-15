//Write a Program to take Character value from user and print it’s ASCII value.

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter any alphabet:-");
	scanf("%c",&ch);
	printf("The ASCII value of given alphabet = %d",int(ch));
	getch();
}