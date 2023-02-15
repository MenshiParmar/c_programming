//wirte a program to perform all assignment operator on value 15.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1 = 15,num2;
	clrscr();
	num1+=1;//16
	printf("After using addition assignment operator = %d\n",num1);
	num1-=2;//14
	printf("After using substraction assignment operator = %d\n",num1);
	num1*=3;//42
	printf("After using multiplication assignment operator = %d\n",num1);
	num1/=4;//10
	printf("After using division assignment operator = %d\n",num1);
	num1%=5;//0
	printf("After using modulo assignment operator = %d\n",num1);
	getch();
}