/* charcode.c-displays code number for a character */
#include <stdio.h>
int main(void)
{
  int ch;

  printf("Please enter a number\n");
  scanf("%d", &ch);
  printf("The letter for %d is %c.\n", ch, ch);

  return 0;
}
