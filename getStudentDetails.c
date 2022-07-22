#include<stdio.h>

int main()
{
  int R_N = 5;
  char St_N[10]= {"\0"};

  printf("\n Enter Student Name: ");
  scanf("%s",&St_N);
  printf("\n Enter Your Roll NO: ");
  scanf("%d",&R_N);

  printf("\n%s\n%d\n", St_N, R_N);
  return 0;
}
