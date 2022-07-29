#include<conio.h>
#include<stdio.h>

int main()
{
  char c;
  int L_v,U_v;
  printf("\n Enter a Alphabate\n");
  scanf("%c",&c );
  L_v = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
  U_v = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
  if (L_v || U_v)
   printf("Your Charcter is Vovel",c);
   else
     printf("Your Charcter NON - Vovel",c);
     return 0;

}
