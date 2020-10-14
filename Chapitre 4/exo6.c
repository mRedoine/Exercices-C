#include<stdio.h>
#include<string.h>
int main(void)
{
  char ch[10];
  printf("Entrez un mot de 10 lettres maximum\n");
  
  scanf("%c", ch);
  
  

  printf("Vous avez entré %s un mot de %lu lettres.\n",ch, strlen(ch));
  for(int i = strlen(ch); i>=0; i--)
    printf("%c", ch[i]);
  printf("\n");
  return 0;

}
