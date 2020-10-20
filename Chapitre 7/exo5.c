#include<stdio.h>
void larger_of(double * first, double * second)
{
  if(*first > *second)
    *second = *first;
  else if(*first < *second)
    *first = *second;
  else
   ;
  printf("After the function :\n%lf and %lf\n", *first, *second);
}
