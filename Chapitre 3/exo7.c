#include<stdio.h>
#define LITER 3.785
#define KILOMETER 1.609
float europeanWay(float miles, float gallon);
int main(void)
{
  float miles;
  float gallon;
  float europeanEquivalent;

  printf("Enter the miles traveled :\n");
  scanf("%f", &miles);

  printf("now the number of gallons consumed :\n");
  scanf("%f", &gallon);

  printf("%.1f miles-per-gallon!\n", miles /gallon);
  printf("%.1f liters-per-100km!\n", europeanWay(miles, gallon)/100);
  return 0;
}

float europeanWay(float miles, float gallon)
{
 float kilometersEquivalent = miles * KILOMETER;
 float literEquivalent = gallon / LITER;

 float liters_per_100_km = kilometersEquivalent / literEquivalent;

 return liters_per_100_km;
}

