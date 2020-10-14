#include<stdio.h>

int main(void)
{
  char ch;
  int spaces =0, n_lines=0,n_char=0;

  while((ch = getchar()) != '#')
  {
   switch(ch)
   {
     case ' ' :
          spaces++;
          break;
     case '\n' :
          n_lines++;
          break;
     default :
          n_char++;
   } 
  }
  printf("%d espaces %d lignes %d autres caracteres", spaces, n_lines, n_char);

  return 0;
} 
