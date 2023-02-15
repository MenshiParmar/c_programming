//Take two integer inputs from the user. First calculate the sum of two then product of two. Finally print the sum and product of both obtained results.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1, num2, sum, mul, ans1;
	long int ans2;
	clrscr();
	printf("Enter num1 value = ");
	scanf("%d",&num1);
	printf("Enter num2 value = ");
	scanf("%d",&num2);
	sum = num1+num2;
	printf("%d + %d = %d\n",num1,num2,sum);
	mul = num1*num2;
	printf("%d * %d = %d\n",num1,num2,mul);
	printf("\n-----The result-----\n\n");
	ans1 = sum+mul;
	printf("%d + %d = %d\n",sum,mul,ans1);
	ans2 = sum*mul;
	printf("%d * %d = %ld",sum,mul,ans2);
	getch();
}