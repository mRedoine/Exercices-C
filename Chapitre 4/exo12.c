#include<stdio.h>
int main(void)
{
  int array[8], power, reads=0;
  for(int index = 0, power = 1; index<=7; index++, power *= 2)
  {
    array[index] = power * 2;
  }
 
  do
  {
    printf("%d\n", array[reads]);
    reads++;
  } while(reads <=7);

  return 0;
}
