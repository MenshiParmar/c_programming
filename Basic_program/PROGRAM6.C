/*print the output of this operation
(!(!(45==67)&&(45<89)&& !(78>=45))) */

#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	printf("The answer of given operation is....\n");
	printf("(!(!(45==67)&&(45<89)&& !(78>=45))) = %d",(!(!(45==67)&&(45<89)&& !(78>=45))));
	getch();
}