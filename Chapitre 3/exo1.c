#include<stdio.h>
int main(void)
{
  char name[30];
  char firstName[30];
  printf("Enter your firstname followed by your name!");
  scanf("%s %s", firstName, name);
  printf("%s,%s\n", name, firstName);

  return 0;
}
