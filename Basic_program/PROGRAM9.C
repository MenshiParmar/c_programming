//what is output of the following program

#include<stdio.h>
#include<conio.h>

void main()
{
	//1
	int a=4,b=6,c=7,d;
	clrscr();
	d = a+b*c;
	printf("Answer of 1 = %d\n",d);
	//2
	d=(a-b)/c;
	printf("Answer of 2 = %d\n",d);
	//3
	int e=4,f=5,g;
	g= e < f+10;
	printf("Answer of 3 = %d\n",g);
	//4
	int h;
	h = 4>5 && 5>3;
	printf("Answer of 4 = %d\n",h);
	getch();
}