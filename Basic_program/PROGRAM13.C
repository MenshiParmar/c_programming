//Write a Program to take input from user and do ASMDM(addition,substraction,multiplication,division,modulo).

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2;
	clrscr();
	printf("Enter num1 value:- ");
	scanf("%d",&num1);
	printf("Enter num2 value:- ");
	scanf("%d",&num2);
	printf("num1 + num2= %d\n",num1+num2);
	printf("num1 - num2= %d\n",num1-num2);
	printf("num1 * num2= %d\n",num1*num2);
	printf("num1 / num2= %d\n",num1/num2);
	printf("num1 mod num2= %d\n",num1%num2);
	getch();
}