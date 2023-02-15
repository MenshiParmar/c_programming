//Take Length and width from user and find area and perimeter of rectangle.

#include<stdio.h>
#include<conio.h>

void main()
{
	int length, width, area, peri;
	clrscr();
	printf("Enter length = ");
	scanf("%d",&length);
	printf("Enter width = ");
	scanf("%d",&width);
	area = length*width;
	printf("Area of rectangle = %d\n",area);
	peri = 2*(length+width);
	printf("Perimeter of rectangle = %d",peri);
	getch();

}