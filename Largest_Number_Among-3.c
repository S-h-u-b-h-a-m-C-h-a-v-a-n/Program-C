#include<stdio.h>
#include<conio.h>

    int main()

     {
       int a,b,c;
         printf("\n Enter a Threee value To Find Which is Max Number");
     scanf("%d %d %d",&a,&b,&c);
           if ((a>=b)&&(a>=c))

     printf("is largest NUmber%d",a);

           if((b>=a)&&(b>=c))

     printf("is a largest number%d",b);

             if((c>=a)&&(c>=b))

   printf("is largest number%d",c);

       return 0;

     }
