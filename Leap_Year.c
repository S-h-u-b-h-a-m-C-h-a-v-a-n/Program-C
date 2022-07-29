#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 0;
  printf("\nEnter a Year\n");
  scanf("%d",&i);

  if (i%400==0)
  printf("Your Year is Leap%d",i);
  else if (i%4==0)
  printf("Your Year ia Leap%d",i);
  else
  printf("Your Year is Not leap%d",i);

}
