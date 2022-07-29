#include<stdio.h>
#include<conio.h>

int main()

{
  char a= 0;
  printf("Enter a Charchter Or Number\n");
  scanf("%c",&a);
  if (((a>='a')&&(a<='z')) || ((a>='A')&&(a<='Z')))
    printf("Charchter");
    else if (((a>='0')&&(a<='9')))
    printf("Number");



}
