#include<stdio.h>

int main()
{
  int status;
  if(fork()==0)
  excel("/bin/date","date",0);
  wait(&status);
  
}
