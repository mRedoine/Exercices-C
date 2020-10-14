#include<stdio.h>
#include<float.h>
int main(void)
{
  double doubleDiv = 1.0 / 3.0;
  float floatDiv = 1.0 /3.0;

  printf("%f\n", doubleDiv);
  printf("%.12f\n", doubleDiv);
  printf("%.16f\n", doubleDiv);

  printf("%d\n", FLT_DIG);
  printf("%d\n", DBL_DIG);

  printf("%f\n", floatDiv);
  printf("%.12f\n", floatDiv);
  printf("%.16f\n", floatDiv);
  return 0;
}  
