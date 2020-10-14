#include<stdio.h>

int main(void)
{
  char ch, prev;
  int count = 0;

  while((ch = getchar()) != '#')
  {
     if(prev =='e' && ch == 'i')
       count++;

     prev =ch;
  }

  printf("La sequence ei est apparue %d fois.\n", count);
  return 0;
}
   
