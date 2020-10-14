#include<stdio.h>

int main(void)
{
  int ch, lower, upper, other, numeric;
  lower = upper = numeric = other = 0;

  while((ch = getchar()) != EOF)
  {
    if (ch >= 65 && ch <= 90)
      upper++;
    else if (ch >= 97 && ch <= 122)
      lower++;
    else if (ch >= 48 && ch <= 57)
      numeric++;
    else 
      other++;
  }

  printf("%d lower character, %d upper ones, %d numerics and %d others.\n", lower, upper, numeric, other);

  return 0;
}
  
