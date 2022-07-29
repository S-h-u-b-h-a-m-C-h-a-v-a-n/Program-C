#include<stdio.h>
#include<conio.h>

int main()

{
  int divident,divider,reminder,quotient;

  printf("\n Enter a deviden\n");
 scanf("%d",&divident);
 printf("\n Enter a divider\n");
scanf("%d",&divider);

quotient=divident/divider;
reminder=divident%divider;

printf("QUOTIENT = %d \n REMINDER = %d",quotient,reminder);

getch();
return  0;

}
