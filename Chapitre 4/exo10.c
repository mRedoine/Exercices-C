#include<stdio.h>
int main(void)
{
  int array[8], values = 0;
  for(int index =0; index <8; index++, values+= index + 6)
  {
   array[index] = values;
  }

  for(int backward = 7; backward >=0; backward--)
  {
   printf("%d  ", array[backward]);
  }
  printf("\n");

  return 0;
}
