#include<stdio.h>
#include<ctype.h>
int main(void)
{
  char ch;
  printf("Entrez un caractère ou un texte:\n");
  while((ch = getchar()) != EOF)
  {
    if(islower(ch) != 0)
      printf("%c est la %dème lettre de l'alphabet\n", ch, (int) ch - 96);
    else if(isupper(ch) != 0)
      printf("%c est la %dème lettre de l'alphabet\n", ch, (int) ch -64);
    else if (ch == '\n')
      ;
    else 
      printf("%d", -1);
  }

  return 0;
}
    
