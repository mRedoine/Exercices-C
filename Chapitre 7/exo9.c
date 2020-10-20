
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
    xpow = power(x, exp); // Appel de la fonction
    printf("%.3g to the power of %d is %.5g\n", x, exp, xpow);
    printf("Enter next pair of numbers or q to quit.\n");
  }

  printf("Hope you enjoyed this trip -- bye!\n");

  return 0;
}


double power(double n, int p)
{
  double pow = 1;
  int i = 0;
  if(n==0)
  {
    return 0.0;
  }
  else if( p > 0)
  {
    pow = n * power(n , p-1);
  }
  else if( p < 0)
  {
    pow = 1/n * power(n , p+1);
    printf("%lf pow\n", pow );
    
  }

  return pow;

}
