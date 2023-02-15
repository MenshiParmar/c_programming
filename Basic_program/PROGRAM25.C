//If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), write a program to calculate his total marks and percentage marks.

#include<stdio.h>
#include<conio.h>

void main()
{
	int mark1=78, mark2=45, mark3=62, total;
	float per;
	clrscr();
	printf("Robot got the marks\n maths=%d\n english=%d\n hindi=%d\n",mark1,mark2,mark3);
	total=mark1+mark2+mark3;
	printf("Total of marks= %d\n",total);
	per = total/3;
	printf("Percentage of marks= %.2f",per);
	getch();
}