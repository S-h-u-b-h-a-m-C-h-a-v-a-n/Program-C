#include<stdio.h>

int main()
{
  int i=10,j=88,temp;
  // Before logic
  printf("Before logic: i%d j%d\n",i,j);
  // 0 = 10
    temp = i;
    //10 = 10

    // 10 = 88
        i = j ;
//88 = 88

        // 88 = 10
      j=temp;
      //10 = 10

      //After logic
      printf("After logic: i%d j%d",i,j);



}
