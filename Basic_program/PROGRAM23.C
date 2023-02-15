//Write a Program to take the radius from the user and calculate its perimeter and area of the circle.

#include<stdio.h>
#include<conio.h>

void main()
{
	int radius;
	float pie=3.14,area,pri;
	clrscr();
	printf("Enter radius of circle:-");
	scanf("%d",&radius);
	pri=2*pie*radius;
	printf("Perimeter of circle=%.3f\n",pri);
	area=pie*radius*radius;
	printf("Area of circle=%.3f",area);
	getch();
}