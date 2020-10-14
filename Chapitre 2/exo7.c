#include <stdio.h>
int main(void)
{
  float inch = 2.54;
  float height;
  printf("Enter your height in inches and i will tell you the equivalent in centimeters :\t");
  scanf("%f", &height);
  printf("%.2f inches gives %f centimeters\n", height, height * inch);
  return 0;
}
