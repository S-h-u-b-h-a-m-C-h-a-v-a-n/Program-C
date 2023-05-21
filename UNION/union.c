#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;
   data.i=10;
  data.f=9.5;
    printf("%d\n %f\n",data.i ,  data.f );




   return 0;
}
