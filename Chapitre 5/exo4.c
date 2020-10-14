#include<stdio.h>

int main(void)
{
  char ch;
  int changeCount = 0;
  while((ch = getchar()) != '#')
  {
    if(ch == '.')
    {
      ch = '!';
      changeCount++;
      printf("%c", ch);
    }
    else if(ch == '!')
    {
      ch = 'r';
      changeCount++;
      printf("%c" , ch);
    }
    
  }
   
  printf("%d changements ont eu lieu!!!!", changeCount);
 
  return 0;
}
