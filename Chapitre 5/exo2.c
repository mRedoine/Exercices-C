#include<stdio.h>

int main(void)
{
  char ch;
  int count = 0;

  while((ch = getchar()) != '#')
  {
   count++;
   printf(" %c:%d %s", ch, ch, (count % 8 == 0) ? "\n" : "");
   
  }
  printf("Bye.\n");

  return 0;
}
