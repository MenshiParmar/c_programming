//write a program to do increment and decrement operator on value 56.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num = 56;
	clrscr();
	printf("num = %d\n",num);
	num++;
	printf("Increment by postfix of num = %d\n",num);
	++num;
	printf("Increment by prefix of num = %d\n",num);
	num--;
	printf("Decrement by postfix of num = %d\n",num);
	--num;
	printf("Decrement by prefix of num = %d",num);
	getch();
}