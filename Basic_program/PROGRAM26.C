//Write a Program to convert days to years, weeks and days.

#include<stdio.h>
#include<conio.h>

void main()
{
	int days,week,year,num;
	clrscr();
	printf("Enter number of days:-");
	scanf("%d",&num);
	year = num/365;
	printf("Year=%d\n",year);
	week=(num%365) / 7;
	printf("Week=%d\n",week);
	days=(num%365) % 365;
	printf("Days=%d",days);
	getch();
}