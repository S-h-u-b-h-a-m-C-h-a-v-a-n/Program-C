#include<stdio.h>
#include<conio.h>
void main()
{

  int i,j,n=6,index=0;
  //printf("Enter The Number ");
  //scanf("%d",&n);
  for(i=1;i<=n;i++)
  if (i %2 == 0)
        continue;
        index++;
  {
    for(j=1;j<=i;j++)
    {
     printf("*");
    }
    for(j=1;j<=n-i;j++)
    {
      printf("%d ",i);
    }
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");

  }

}
