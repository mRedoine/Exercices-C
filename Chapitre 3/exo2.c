#include<stdio.h>
int main(void)
{
  char firstname[40];
  printf("What is your firstname ?\n");
  scanf("%s", firstname);

  printf("\"%s\"\n", firstname);
  printf("%-20s\n", firstname);
  printf("\"%20s\"\n", firstname);
  printf("%3s\n", firstname);


  return 0;
}
