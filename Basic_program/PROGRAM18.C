//Write a Program to add 3 to the ASCII value of the character (user enter) and print the equivalent alphabet.

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	int ans;
	clrscr();
	printf("Enter any alphabet:-");
	scanf("%c",&ch);
	ans = int(ch)+3;
	printf("After adding 3 to given alphabet:- %c",char(ans));
	getch();
}
