
#include<stdio.h>
#include<conio.h>
#define max 10
int main()
{
   int No=0;
   printf("\n enter the attern u wNT");
   scanf("%d",&No);


   for(int i=1;i<=max;i++)
   {
       printf("\n");
        for(int j=1;j<=i;j++)
        {
        printf("%3d",No*j);

        }


   }

   getch();
   return 0;
}
