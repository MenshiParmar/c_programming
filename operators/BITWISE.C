#include<stdio.h>
#include<conio.h>
//  Bitwise Operator
//   P     Q     P&Q   P|Q     P^Q
//   0     0     0     0       0
//   1     1     1     1       0
//   1     0     0     1       1
//   0     1     0     1       1


//Right Shift   c==8     00001000
//     c>>	2       00000010
//Left Shif c<<2  00100000
void main()
{
   int a=15,b=8,c=8;
   clrscr();
   printf("AND is:%d ",(a&b));
   printf("\nOR is : %d ",(a|b));
   printf("\nXOR is : %d",(a^b));
   printf("\nRight Shift is : %d",(c>>2));
   printf("\nleft Shift is : %d ",(c<<2));
   getch();
}