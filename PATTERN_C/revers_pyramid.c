#include<stdio.h>
int main()
{
  int i ,j,k,l;
  for(i=1;i<=5;i++)
  {
    for(j=2;j<=i;j++)  // for looop for spaces
    {
      printf(" ");
    }
    for(k=i;k<=5;k++)
  {
    printf("*");
  }
  for(l=i;l<=4;l++)
  {
    printf("*");
  }
    printf("\n");
  }
  return 0;
}
