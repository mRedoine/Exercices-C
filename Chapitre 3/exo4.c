#include <stdio.h>
int main(void)
{
  float height;
  char name[30];

  printf("Enter your name :\n");
  scanf("%s", name);
  printf(" now your height in inches :\n");
  scanf("%f", &height);

  printf("%s, you are %.3f feet tall.\n", name, height / 12);

  return 0;
}
