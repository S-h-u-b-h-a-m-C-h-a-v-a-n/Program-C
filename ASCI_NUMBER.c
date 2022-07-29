#include<stdio.h>
#include<conio.h>

int main()
   {
    int i = 0;
       printf(" \n Enter a charachter To Conveert Into ASCI Number\n");

       while (i<=127)
       {
         printf("\n %d=%c",i,i);
         i++;

       }
       getch();
       return 0 ;
   }
