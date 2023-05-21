#include<stdio.h>
int main()
{
  int i ,j, k;
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
    printf("\n");
  }
  return 0;
}
/*


*****
-****
--***
---**
----*


*/
