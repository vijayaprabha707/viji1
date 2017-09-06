
# include <stdio.h> 
# include <conio.h> 
void main() 
{ 
 int n, count = 0 ; 
 clrscr();
 printf("Enter a number");
 scanf("%d", &n);
 while(n > 0) 
 { 
  count++ ; 
  n = n / 10 ; 
 } 
 printf("The number of digits is %d", count); 
 getch();
}
