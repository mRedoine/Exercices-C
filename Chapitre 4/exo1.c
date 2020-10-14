#include<stdio.h> 
#define MAX 26
int main(void)
{
  char ch[26];
  int index = 0, i=0;
  printf("Entrer l'alphabet en minuscule : ");
  do
  {
     scanf("%c", &ch[index]);
     index++;
  } while (index < MAX);

  for(i = 0; i < 26; i++)
  {
    printf("%c", ch[i]);
  }

  return 0;
}
