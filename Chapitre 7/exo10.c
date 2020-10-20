#include<stdio.h>

void to_base_n(int number, int base) /* fonction recursive */
{
  int r;
  while(base < 2 || base > 10)
  {
  	printf("The second argument has to be in the range of 2 and 10 !!!\n");
  	scanf("%d", &base);
  }
  r = number % base;
  if (number >2)
  {
  	number = number / base;
  	to_base_n(number, base);
  }
  	
  printf("%d", r);
  return;
}