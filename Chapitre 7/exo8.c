//power.c -- raise number to integer powers
#include<stdio.h>
double power(double n, int p);
int main(void)
{
  double x, xpow;
  int exp;

  printf("Enter a number and the positive integer power ");
  printf("to which\n the number will be raised. Enter q ");
  printf("to quit.\n");
  while(scanf("%lf %d", &x, &exp) == 2)
  {
    xpow = power(x, exp); // function call
    printf("%.3g to the power of %d is %.5g\n", x, exp, xpow);
    printf("Enter next pair of numbers or q to quit.\n");
  }

  printf("Hope you enjoyed this trip -- bye!\n");

  return 0;
}


double power(double n, int p)
{
  double pow = 1;
  int i;
  if(p > 0)
  { 
    for(i=1; i<=p; i++)
      pow *= n;
  }
  else if(p < 0)
  {
    for(; p<0; p++)
      pow*=n;
    pow = 1 / pow;
  }
  else {
  	printf("0 to the power of 0, so it's using a value of 1\n");
  }
  return pow;
}
