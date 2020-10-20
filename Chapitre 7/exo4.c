#include <stdio.h>
double harmonic_mean(double first, double second)
{
  double result;
  result = (2 / ((1/first) + (1/second)));

  return result;
}
