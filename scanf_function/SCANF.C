//scanf function is input function which takes value from the user

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1;
	float num2;
	char ch;
	clrscr();
	printf("Enter the character= ");
	scanf("%c",&ch);
	printf("ch = %c\n",ch);
	printf("Enter the integer value= ");
	scanf("%d",&num1);
	printf("num1 = %d\n",num1);
	printf("Enter the float value= ");
	scanf("%f",&num2);
	printf("num2 = %f\n",num2);
	getch();
}