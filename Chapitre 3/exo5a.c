#include<stdio.h>
#include<string.h>
int main(void)
{
  char name[30];
  char firstname[30];
  int fnPos;
  int nPos;

  printf("What is your name?\n");
  scanf("%s", name);
  printf("Your firstname?\n");
  scanf("%s", firstname);
  fnPos= printf("%s ", firstname);
  nPos = printf("%s\n", name);
  printf("%-*lu %-*lu\n",fnPos - 1, strlen(firstname),nPos - 1, strlen(name));
  return 0;

}
