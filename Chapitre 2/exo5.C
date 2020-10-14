#include<stdio.h>
float calculation(float age);
int main(void)
{
 float age;
 float numberOfSeconds;

 printf(" How old are you ?\n");
 scanf("%f", &age);
 numberOfSeconds = calculation(age);
 printf(" U're on earth since %f seconds\n", numberOfSeconds);

 return 0;
}

float calculation(float age) {
  double result = age * 3.156e7;
  return result;
}
