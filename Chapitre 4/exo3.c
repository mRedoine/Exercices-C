#include<stdio.h>
int main(void)
{
  int index, i;
  const int ROWS = 6;
  char ch;

  for(index=ROWS; index >= 0; index--)
  {
    for(ch='F'; ch >= 'A' + index;ch--)
      printf("%c", ch);
    printf("\n");

  }
  return 0;
}  
