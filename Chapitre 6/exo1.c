#include<stdio.h>
#include<ctype.h>
int main(void)
{
  int ch, count = 0;
  while((ch =getchar()) != EOF)
  {
    if(isalpha(ch))
     count++;
  }
  
  printf("You typed %d characters.\n", count);

  return 0;
}
