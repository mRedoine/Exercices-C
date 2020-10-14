#include<stdio.h>
int main(void)
{
  float input;
  printf("Enter a floating-point value :\n");
  scanf("%f", &input);

  printf("%.1f exp-> %.1e\n", input, input);
  printf("%.1f exp -> %.1E\n", input, input);

  return 0;
}
