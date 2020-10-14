#include<stdio.h>

int main(void)
{
  int ch, count =0;

  while((ch = getchar()) != EOF)
  {
    if(ch < 32 && ch != 9 && ch != 10)
      printf("^%c -> %d ", ch + 64, ch);
    if(ch == 10)
      printf("%d -> \\n \n", ch);
    else if (ch == 9)
    {
      printf("%d -> \\t ", ch);
      count++;
    }
    else
    {
      count++;
      printf("%d -> %c %s", ch, ch, count % 10 == 0 ? "\n": " " );
    }
  }
  return 0;
}
