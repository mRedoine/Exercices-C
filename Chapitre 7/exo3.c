#include <stdio.h>

void character_display(char ch, int number, int lines)
{
  int n, l;
  for(l = 0;l < lines; l++)
  {
    for(n = 0; n < number; n++)
    {
      printf("%c", ch);
    }
   printf("\n");
  }

}
