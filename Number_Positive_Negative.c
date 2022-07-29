#include<stdio.h>
#include<conio.h>

int main()
{
  int N=0;

  printf("\nEnter a value\n");
  scanf("%d",&N );
  if (N>0)
   printf("Your Number is Positive",N);
   else if (N==0)
   printf("\nYour Value is 0. 0 is Not a Negtaive / Positive value");


   else
    printf("Your Number is Negative");

    return 0;
}
