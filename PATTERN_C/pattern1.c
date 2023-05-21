#include<stdio.h>
int main()
{
  int i,k,j;

  for(i=1;i<=5;i++)  // for loop for how long pattern want to print
  {
    for(j=i;j<=4;j++)
    {
      printf(" ");   // for loop for spaces

    }
    for(k=1;k<=i;k++)  //for loop for * print
    {
      printf("*");

    }
    printf("\n");
  }
  return 0;
}
